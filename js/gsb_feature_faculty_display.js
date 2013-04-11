(function ($) {
 /**
  * Form behavior for GSB Faculty A-Z index
  */
 Drupal.behaviors.gsbFacultyAZ = {
   attach: function (context, settings) {
     $('#views-exposed-form-faculty-filters-faculty-list .views-widget-filter-title').css('display', 'none');
     $('ul.facet-title-az li').click(function() {
       var $this = $(this);
       var $letter = $this.text();
       if ($letter.length > 1) {
         $letter = '';
       }

       $('#views-exposed-form-faculty-filters-faculty-list input.form-text').val($letter).keyup();
     }); /* end gsbFacultyAZ*/
   }
 }

})(jQuery);
