<?php

/**
 *
 * @return boolean
 */
function mobileapi_services_access() {
  return TRUE;
}

/**
 * Return data to session module.
 */
function mobileapi_session_services_data($date) {
  $data = array();

  $data['arg'] = $date;

  $query = db_select('node', 'e');
  $query->fields('e', array('nid', 'title', 'created', 'changed', 'uid'));
  $query->condition('e.type', 'session' , '=');
  $query->condition('e.status', 1 , '=');

  $result = $query->execute();

  foreach ($result as $row) {
    $node = node_load($row->nid);

    $data['items'][] = array(
      'nid' => (int) $node->nid,
      'session_name' => 'Name ' . $node->nid,
      'speaker_name' => 'Speaker' . $node->nid,
      'time' => '15:15 - 16:15',                    // From 15:00 to 16:00. Example 15:15 - 16:15.
      'room' => 'Room',
      'language' => $node->language,                // Polish / English / Language neutral.
    );

  }

  return $data;
}
