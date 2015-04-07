<?php

/**
 * @file
 * Provide the admin related functions for the MailFish module.
 */

 /**
  * Defines the MailFish admin settings form
  */
  function mailfish_admin_settings_form() {
    $form['mailfish_message'] = array(
      '#type' => 'textfield',
      '#title' => t('Message to display after a user signs up.'),
      '#default_value' => variable_get('mailfish_message', t('Thank you for signing up to the mailing list')),
    );
    return system_settings_form($form);
  }
