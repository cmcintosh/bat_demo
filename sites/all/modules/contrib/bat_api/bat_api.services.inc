<?php


/**
 * Implements hook_default_services_endpoint().
 */
function bat_api_default_services_endpoint() {
  $export = array();

  $endpoint = new stdClass();
  $endpoint->disabled = FALSE; /* Edit this to true to make a default endpoint disabled initially */
  $endpoint->api_version = 3;
  $endpoint->name = 'bat_api';
  $endpoint->server = 'rest_server';
  $endpoint->path = 'bat/v1';
  $endpoint->authentication = array(
    'services' => 'services',
  );
  $endpoint->server_settings = array(
    'formatters' => array(
      'json' => TRUE,
      'bencode' => FALSE,
      'jsonp' => FALSE,
      'php' => FALSE,
      'xml' => FALSE,
      'yaml' => FALSE,
    ),
    'parsers' => array(
      'application/json' => TRUE,
      'application/vnd.php.serialized' => TRUE,
      'application/x-www-form-urlencoded' => TRUE,
      'application/x-yaml' => TRUE,
      'application/xml' => TRUE,
      'multipart/form-data' => TRUE,
      'text/xml' => TRUE,
    ),
  );
  $endpoint->resources = array(
    'units' => array(
      'operations' => array(
        'index' => array(
          'enabled' => '1',
        ),
        'update' => array(
          'enabled' => '1',
        ),
      ),
      'actions' => array(
        'add' => array(
          'enabled' => '1',
        ),
      ),
    ),
    'availability' => array(
      'operations' => array(
        'index' => array(
          'enabled' => '1',
        ),
        'update' => array(
          'enabled' => '1',
        ),
      ),
    ),
    'pricing' => array(
      'operations' => array(
        'index' => array(
          'enabled' => '1',
        ),
        'update' => array(
          'enabled' => '1',
        ),
      ),
    ),
    'booking' => array(
      'operations' => array(
        'index' => array(
          'enabled' => '1',
        ),
      ),
      'actions' => array(
        'add' => array(
          'enabled' => '1',
        ),
      ),
    ),
    'user' => array(
      'actions' => array(
        'login' => array(
          'enabled' => '1',
        ),
        'logout' => array(
          'enabled' => '1',
          'settings' => array(
            'services' => array(
              'resource_api_version' => '1.0',
            ),
          ),
        ),
      ),
    ),
  );
  $endpoint->debug = 0;
  $export['bat_api'] = $endpoint;

  return $export;
}
