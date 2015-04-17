<div id="sessions-links">
  <ul>

    <?php if($is_session_submit_active):?>
      <li><?php print l(t('Submit a Session'), 'node/add/session'); ?></li>
      <li><?php print l(t('Proposed Sessions'), 'sessions/proposed'); ?></li>
    <?php else: ?>
      <li><?php print l(t('Accepted Sessions'), 'sessions/accepted'); ?></li>
      <li><?php print l(t('Proposed Sessions'), 'sessions/proposed'); ?></li>
    <?php endif; ?>

    <?php if($is_video_link_active):?>
      <li><?php print l(t('Videos'), 'videos'); ?></li>
    <?php endif; ?>

  </ul>
</div>
