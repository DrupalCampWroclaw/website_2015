(function ($, Drupal, window, document, undefined) {


// To understand behaviors, see https://drupal.org/node/756722#behaviors
    Drupal.behaviors.hide_profile_fields = {
        attach: function(context, settings) {


            $("input[name='field_attendance[und][no]']").live('click', function(){

                $('.form-item-field-attendance-und-friday').toggle("slow");
                $('.form-item-field-attendance-und-saturday').toggle("slow");
                $('.form-item-field-attendance-und-sunday').toggle("slow");

                $('input:checkbox[value=friday]').attr('checked',false);
                $('input:checkbox[value=saturday]').attr('checked',false);
                $('input:checkbox[value=sunday]').attr('checked',false);

            });

            if($("#edit-field-attendance-und-no").is(':checked')) {

                $('.form-item-field-attendance-und-friday').hide();
                $('.form-item-field-attendance-und-saturday').hide();
                $('.form-item-field-attendance-und-sunday').hide();

            }

        }
    };


})(jQuery, Drupal, this, this.document);