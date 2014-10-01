rubystandard
============

Standard Drupal 7 installation profile for Ruby Design clients.

# Usage
    git clone https://github.com/malcomio/rubystandard.git
    cd rubystandard
    drush make build-rubystandard.make ../www/MYNEWSITE --prepare-install
    cd ../www/MYNEWSITE
    drush zen MYTHEMENAME --without-rtl

This installs the standard profile, including:
* WYSIWYG
* input filters
* admin_menu
* media settings



To download all dependencies via drush:

   drush dl admin_menu admin_views advanced_help backup_migrate block_class ctools date devel draggableviews features features_extra file_entity google_analytics image libraries link linkit media menu_attributes menu_block manualcrop metatag pathauto globalredirect redirect special_menu_items token uuid_features video_filter views views_slideshow webform wysiwyg -n
