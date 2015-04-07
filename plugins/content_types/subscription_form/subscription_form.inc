<?php

/**
 * @file
 * Content type plugin to expose MailFish form.
 */

$plugin = array(
  'title' => t('MailFish Signup Form'),
  'description' => t('Provides form for users to sign up for mailing lists.'),
  'content_types' => array('subscription_form'),
  'category' => t('MailFish'),
  'single' => TRUE,
);

/**
 * 'Edit' callback for the content type.
 */
function mailfish_subscription_form_content_type_edit_form($form, &$form_state) {
  return $form;
}

/**
 * Put the output for your content type in the pane object's content.
 */
function mailfish_subscription_form_content_type_render($subtype, $conf, $args, $context) {
  $pane = new stdClass();
  $pane->content = drupal_get_form('mailfish_email_form');
  return $pane;
}
