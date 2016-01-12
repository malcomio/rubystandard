rubystandard
============

Standard Drupal 7 installation profile for Ruby Design clients.

# Usage
    git clone https://github.com/malcomio/rubystandard.git
    cd rubystandard
    drush make build-rubystandard.make ../www/MYNEWSITE --prepare-install
    cd ../www/MYNEWSITE
    drush zen MYTHEMENAME --without-rtl
    drush si rubystandard --site-name="My Site" --account-name="My Name" --account-pass=admin

This installs the standard profile, including:
* WYSIWYG
* input filters
* admin_menu
* media settings



To download all dependencies via drush:

drush dl admin_menu, admin_views, advanced_help, backup_migrate, block_class, ctools, date, devel, draggableviews, features, features_extra, file_entity, globalredirect, google_analytics, imageapi_optimize, jquery_update, libraries, link, linkit, manualcrop, media-7.x-2.0-alpha4, menu_attributes, menu_block, metatag, multiform, pathauto, pathologic, plupload, r4032login, redirect, rubik, search404, securesite, special_menu_items, tao, token, transliteration, uuid, uuid_features, video_filter, views, views_bulk_operations, views_slideshow, webform, wysiwyg, xmlsitemap

drush en admin_menu, admin_views, advanced_help, backup_migrate, block_class, ctools, date, devel, draggableviews, features, fe_block, file_entity, globalredirect, googleanalytics, imageapi_optimize, jquery_update, libraries, link, linkit, manualcrop, media_bulk_upload, menu_attributes, menu_block, metatag, pathauto, pathologic, r4032login, redirect, rubik, search404, securesite, special_menu_items, tao, token, transliteration, uuid, uuid_features, video_filter, views, views_bulk_operations, views_slideshow, webform, wysiwyg, xmlsitemap_node