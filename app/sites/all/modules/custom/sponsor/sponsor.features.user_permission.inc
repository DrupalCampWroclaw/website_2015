<?php
/**
 * @file
 * sponsor.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function sponsor_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'view any simple_block_with_translations bean'.
  $permissions['view any simple_block_with_translations bean'] = array(
    'name' => 'view any simple_block_with_translations bean',
    'roles' => array(),
    'module' => 'bean',
  );

  return $permissions;
}
