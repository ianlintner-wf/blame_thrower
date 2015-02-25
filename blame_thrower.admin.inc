<?php

/**
 * Admin settings callback for blame_thrower module
 * @return mixed
 */
function blame_thrower_settings() {
  $form = array();
  $form['blame_thrower_logging_enabled'] = array(
    '#type'           => 'checkbox',
    '#title'          => 'Logging Enabled',
    '#default_value'  => variable_get('blame_thrower_logging_enabled', TRUE)
  );

  $form['blame_thrower_logging_identity'] = array(
    '#type'           => 'textfield',
    '#title'          => 'Watchdog Identity',
    '#default_value'  => variable_get('blame_thrower_logging_identity', 'blame_thrower')
  );

  $form['blame_thrower_logging_debug'] = array(
    '#type'           => 'checkbox',
    '#title'          => 'Log Entity Debug Information',
    '#default_value'  => variable_get('blame_thrower_logging_debug', TRUE)
  );

  $form['blame_thrower_logging_type_filter'] = array(
    '#type'           => 'textarea',
    '#title'          => 'Filter by Entity Type (one per line)',
    '#description'    => 'Entity type',
    '#default_value'  => variable_get('blame_thrower_logging_type_filter', "user\r\nnode\r\ntaxonomy_vocabulary\r\ntaxonomy_term")
  );

  $form['blame_thrower_logging_bundle_filter'] = array(
    '#type'           => 'textarea',
    '#title'          => 'Filter by Node Bundle (one per line)',
    '#description'    => 'Use the machine name Leave empty for all',
    '#default_value'  => variable_get('blame_thrower_logging_bundle_filter', "")
);

  return system_settings_form($form);
}