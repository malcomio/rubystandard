<?php
/**
 * @file
 * rubystandard.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function rubystandard_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'use text format filtered_html'.
  $permissions['use text format filtered_html'] = array(
    'name' => 'use text format filtered_html',
    'roles' => array(
      'editor' => 'editor',
    ),
    'module' => 'filter',
  );

  return $permissions;
}
