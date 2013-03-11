<?php
function easysite_import_admin_settings_form() {
  $form = array();

  $form['easysite_import_database'] = array(
    '#type' => 'select',
    '#title' => t('Socialservices database'),
    '#description' => t('Choose the database connection you have set up for the easysite socialservices.'),
    '#options' => drupal_map_assoc(array_keys($GLOBALS['databases'])),
    '#default_value' => variable_get('easysite_import_database', NULL),
    '#required' => TRUE,
  );

  $form['easysite_import_osecret'] = array(
    '#type' => 'textfield',
    '#title' => t('Secret for easysite_import'),
    '#description' => t('If you do not have this, then either you just have to get that somehow or this module needs to be enhanced to fetch that secret from the service.'),
    '#default_value' => variable_get('easysite_import_osecret', ''),
  );
  
  return system_settings_form($form);
}