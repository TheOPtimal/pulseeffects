#include "plugin_ui_base.hpp"

PluginUiBase::PluginUiBase(const Glib::RefPtr<Gtk::Builder>& refBuilder,
                           std::string settings_name)
    : builder(refBuilder), settings(Gio::Settings::create(settings_name)) {
    builder->get_widget("listbox_control", listbox_control);
    builder->get_widget("controls", controls);
    builder->get_widget("img_state", img_state);

    builder->get_widget("input_level_left", input_level_left);
    builder->get_widget("input_level_right", input_level_right);
    builder->get_widget("output_level_left", output_level_left);
    builder->get_widget("output_level_right", output_level_right);
}

PluginUiBase::~PluginUiBase() {}