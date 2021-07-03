/* Welcome.c generated by valac 0.42.5, the Vala compiler
 * generated from Welcome.vala, do not modify */

/*
* Copyright (c) 2011-2020 ThemeTwister
*
* This program is free software; you can redistribute it and/or
* modify it under the terms of the GNU General Public
* License as published by the Free Software Foundation; either
* version 2 of the License, or (at your option) any later version.
*
* This program is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
* General Public License for more details.
*
* You should have received a copy of the GNU General Public
* License along with this program; if not, write to the
* Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
* Boston, MA 02110-1301 USA
*
* Authored by: Kris Henriksen <krishenriksen.work@gmail.com>
*/


#include <glib.h>
#include <glib-object.h>
#include <gtk/gtk.h>
#include <pango/pango.h>


#define THEME_TWISTER_TYPE_WELCOME (theme_twister_welcome_get_type ())
#define THEME_TWISTER_WELCOME(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), THEME_TWISTER_TYPE_WELCOME, ThemeTwisterWelcome))
#define THEME_TWISTER_WELCOME_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), THEME_TWISTER_TYPE_WELCOME, ThemeTwisterWelcomeClass))
#define THEME_TWISTER_IS_WELCOME(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), THEME_TWISTER_TYPE_WELCOME))
#define THEME_TWISTER_IS_WELCOME_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), THEME_TWISTER_TYPE_WELCOME))
#define THEME_TWISTER_WELCOME_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), THEME_TWISTER_TYPE_WELCOME, ThemeTwisterWelcomeClass))

typedef struct _ThemeTwisterWelcome ThemeTwisterWelcome;
typedef struct _ThemeTwisterWelcomeClass ThemeTwisterWelcomeClass;
typedef struct _ThemeTwisterWelcomePrivate ThemeTwisterWelcomePrivate;
enum  {
	THEME_TWISTER_WELCOME_0_PROPERTY,
	THEME_TWISTER_WELCOME_NUM_PROPERTIES
};
static GParamSpec* theme_twister_welcome_properties[THEME_TWISTER_WELCOME_NUM_PROPERTIES];
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))

struct _ThemeTwisterWelcome {
	GtkBox parent_instance;
	ThemeTwisterWelcomePrivate * priv;
};

struct _ThemeTwisterWelcomeClass {
	GtkBoxClass parent_class;
};


static gpointer theme_twister_welcome_parent_class = NULL;

GType theme_twister_welcome_get_type (void) G_GNUC_CONST;
ThemeTwisterWelcome* theme_twister_welcome_new (void);
ThemeTwisterWelcome* theme_twister_welcome_construct (GType object_type);


ThemeTwisterWelcome*
theme_twister_welcome_construct (GType object_type)
{
	ThemeTwisterWelcome * self = NULL;
	GtkBox* wrapper = NULL;
	GtkBox* _tmp0_;
	GtkStyleContext* _tmp1_;
	GtkImage* logo = NULL;
	GtkImage* _tmp2_;
	GtkStyleContext* _tmp3_;
	GtkLabel* welcome_label = NULL;
	GtkLabel* _tmp4_;
	GValue _tmp5_ = {0};
	GtkStyleContext* _tmp6_;
	GtkLabel* welcome_description = NULL;
	GtkLabel* _tmp7_;
	GtkStyleContext* _tmp8_;
	self = (ThemeTwisterWelcome*) g_object_new (object_type, NULL);
	_tmp0_ = (GtkBox*) gtk_box_new (GTK_ORIENTATION_VERTICAL, 0);
	g_object_ref_sink (_tmp0_);
	wrapper = _tmp0_;
	_tmp1_ = gtk_widget_get_style_context ((GtkWidget*) wrapper);
	gtk_style_context_add_class (_tmp1_, "themetwister");
	_tmp2_ = (GtkImage*) gtk_image_new_from_icon_name ("twisteros", (GtkIconSize) GTK_ICON_SIZE_DIALOG);
	g_object_ref_sink (_tmp2_);
	logo = _tmp2_;
	_tmp3_ = gtk_widget_get_style_context ((GtkWidget*) logo);
	gtk_style_context_add_class (_tmp3_, "themetwister_logo");
	gtk_container_add ((GtkContainer*) wrapper, (GtkWidget*) logo);
	_tmp4_ = (GtkLabel*) gtk_label_new ("Change Your Theme");
	g_object_ref_sink (_tmp4_);
	welcome_label = _tmp4_;
	g_value_init (&_tmp5_, G_TYPE_BOOLEAN);
	g_value_set_boolean (&_tmp5_, FALSE);
	g_object_set_property ((GObject*) welcome_label, "can-focus", &_tmp5_);
	G_IS_VALUE (&_tmp5_) ? (g_value_unset (&_tmp5_), NULL) : NULL;
	_tmp6_ = gtk_widget_get_style_context ((GtkWidget*) welcome_label);
	gtk_style_context_add_class (_tmp6_, "themetwister_label");
	gtk_container_add ((GtkContainer*) wrapper, (GtkWidget*) welcome_label);
	_tmp7_ = (GtkLabel*) gtk_label_new ("Want a different look? This will change your current theme.");
	g_object_ref_sink (_tmp7_);
	welcome_description = _tmp7_;
	gtk_label_set_line_wrap_mode (welcome_description, PANGO_WRAP_WORD);
	gtk_label_set_line_wrap (welcome_description, TRUE);
	gtk_label_set_lines (welcome_description, 2);
	gtk_label_set_justify (welcome_description, GTK_JUSTIFY_CENTER);
	_tmp8_ = gtk_widget_get_style_context ((GtkWidget*) welcome_description);
	gtk_style_context_add_class (_tmp8_, "themetwister_description");
	gtk_container_add ((GtkContainer*) wrapper, (GtkWidget*) welcome_description);
	gtk_container_add ((GtkContainer*) self, (GtkWidget*) wrapper);
	_g_object_unref0 (welcome_description);
	_g_object_unref0 (welcome_label);
	_g_object_unref0 (logo);
	_g_object_unref0 (wrapper);
	return self;
}


ThemeTwisterWelcome*
theme_twister_welcome_new (void)
{
	return theme_twister_welcome_construct (THEME_TWISTER_TYPE_WELCOME);
}


static void
theme_twister_welcome_class_init (ThemeTwisterWelcomeClass * klass)
{
	theme_twister_welcome_parent_class = g_type_class_peek_parent (klass);
}


static void
theme_twister_welcome_instance_init (ThemeTwisterWelcome * self)
{
}


GType
theme_twister_welcome_get_type (void)
{
	static volatile gsize theme_twister_welcome_type_id__volatile = 0;
	if (g_once_init_enter (&theme_twister_welcome_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (ThemeTwisterWelcomeClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) theme_twister_welcome_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (ThemeTwisterWelcome), 0, (GInstanceInitFunc) theme_twister_welcome_instance_init, NULL };
		GType theme_twister_welcome_type_id;
		theme_twister_welcome_type_id = g_type_register_static (gtk_box_get_type (), "ThemeTwisterWelcome", &g_define_type_info, 0);
		g_once_init_leave (&theme_twister_welcome_type_id__volatile, theme_twister_welcome_type_id);
	}
	return theme_twister_welcome_type_id__volatile;
}



