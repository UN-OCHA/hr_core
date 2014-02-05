<?php
/**
 * @file
 * hr_core.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function hr_core_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'use panels in place editing'.
  $permissions['use panels in place editing'] = array(
    'name' => 'use panels in place editing',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'panels',
  );

  return $permissions;
}