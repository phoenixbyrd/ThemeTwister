/* Application.c generated by valac 0.42.5, the Vala compiler
 * generated from Application.vala, do not modify */

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
#include <gdk/gdk.h>
#include <stdlib.h>
#include <string.h>
#include <gio/gio.h>
#include <config.h>


#define TYPE_THEME_TWISTER_WINDOW (theme_twister_window_get_type ())
#define THEME_TWISTER_WINDOW(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_THEME_TWISTER_WINDOW, ThemeTwisterWindow))
#define THEME_TWISTER_WINDOW_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_THEME_TWISTER_WINDOW, ThemeTwisterWindowClass))
#define IS_THEME_TWISTER_WINDOW(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_THEME_TWISTER_WINDOW))
#define IS_THEME_TWISTER_WINDOW_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_THEME_TWISTER_WINDOW))
#define THEME_TWISTER_WINDOW_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_THEME_TWISTER_WINDOW, ThemeTwisterWindowClass))

typedef struct _ThemeTwisterWindow ThemeTwisterWindow;
typedef struct _ThemeTwisterWindowClass ThemeTwisterWindowClass;
typedef struct _ThemeTwisterWindowPrivate ThemeTwisterWindowPrivate;
enum  {
	THEME_TWISTER_WINDOW_0_PROPERTY,
	THEME_TWISTER_WINDOW_NUM_PROPERTIES
};
static GParamSpec* theme_twister_window_properties[THEME_TWISTER_WINDOW_NUM_PROPERTIES];
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))
#define _g_free0(var) (var = (g_free (var), NULL))

#define THEME_TWISTER_TYPE_WELCOME (theme_twister_welcome_get_type ())
#define THEME_TWISTER_WELCOME(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), THEME_TWISTER_TYPE_WELCOME, ThemeTwisterWelcome))
#define THEME_TWISTER_WELCOME_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), THEME_TWISTER_TYPE_WELCOME, ThemeTwisterWelcomeClass))
#define THEME_TWISTER_IS_WELCOME(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), THEME_TWISTER_TYPE_WELCOME))
#define THEME_TWISTER_IS_WELCOME_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), THEME_TWISTER_TYPE_WELCOME))
#define THEME_TWISTER_WELCOME_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), THEME_TWISTER_TYPE_WELCOME, ThemeTwisterWelcomeClass))

typedef struct _ThemeTwisterWelcome ThemeTwisterWelcome;
typedef struct _ThemeTwisterWelcomeClass ThemeTwisterWelcomeClass;

#define THEME_TWISTER_TYPE_TWISTER_OS (theme_twister_twister_os_get_type ())
#define THEME_TWISTER_TWISTER_OS(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), THEME_TWISTER_TYPE_TWISTER_OS, ThemeTwisterTwisterOS))
#define THEME_TWISTER_TWISTER_OS_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), THEME_TWISTER_TYPE_TWISTER_OS, ThemeTwisterTwisterOSClass))
#define THEME_TWISTER_IS_TWISTER_OS(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), THEME_TWISTER_TYPE_TWISTER_OS))
#define THEME_TWISTER_IS_TWISTER_OS_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), THEME_TWISTER_TYPE_TWISTER_OS))
#define THEME_TWISTER_TWISTER_OS_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), THEME_TWISTER_TYPE_TWISTER_OS, ThemeTwisterTwisterOSClass))

typedef struct _ThemeTwisterTwisterOS ThemeTwisterTwisterOS;
typedef struct _ThemeTwisterTwisterOSClass ThemeTwisterTwisterOSClass;

#define THEME_TWISTER_TYPE_TWISTER95 (theme_twister_twister95_get_type ())
#define THEME_TWISTER_TWISTER95(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), THEME_TWISTER_TYPE_TWISTER95, ThemeTwisterTwister95))
#define THEME_TWISTER_TWISTER95_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), THEME_TWISTER_TYPE_TWISTER95, ThemeTwisterTwister95Class))
#define THEME_TWISTER_IS_TWISTER95(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), THEME_TWISTER_TYPE_TWISTER95))
#define THEME_TWISTER_IS_TWISTER95_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), THEME_TWISTER_TYPE_TWISTER95))
#define THEME_TWISTER_TWISTER95_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), THEME_TWISTER_TYPE_TWISTER95, ThemeTwisterTwister95Class))

typedef struct _ThemeTwisterTwister95 ThemeTwisterTwister95;
typedef struct _ThemeTwisterTwister95Class ThemeTwisterTwister95Class;

#define THEME_TWISTER_TYPE_TWISTER_XP (theme_twister_twister_xp_get_type ())
#define THEME_TWISTER_TWISTER_XP(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), THEME_TWISTER_TYPE_TWISTER_XP, ThemeTwisterTwisterXP))
#define THEME_TWISTER_TWISTER_XP_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), THEME_TWISTER_TYPE_TWISTER_XP, ThemeTwisterTwisterXPClass))
#define THEME_TWISTER_IS_TWISTER_XP(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), THEME_TWISTER_TYPE_TWISTER_XP))
#define THEME_TWISTER_IS_TWISTER_XP_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), THEME_TWISTER_TYPE_TWISTER_XP))
#define THEME_TWISTER_TWISTER_XP_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), THEME_TWISTER_TYPE_TWISTER_XP, ThemeTwisterTwisterXPClass))

typedef struct _ThemeTwisterTwisterXP ThemeTwisterTwisterXP;
typedef struct _ThemeTwisterTwisterXPClass ThemeTwisterTwisterXPClass;

#define THEME_TWISTER_TYPE_TWISTER7 (theme_twister_twister7_get_type ())
#define THEME_TWISTER_TWISTER7(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), THEME_TWISTER_TYPE_TWISTER7, ThemeTwisterTwister7))
#define THEME_TWISTER_TWISTER7_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), THEME_TWISTER_TYPE_TWISTER7, ThemeTwisterTwister7Class))
#define THEME_TWISTER_IS_TWISTER7(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), THEME_TWISTER_TYPE_TWISTER7))
#define THEME_TWISTER_IS_TWISTER7_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), THEME_TWISTER_TYPE_TWISTER7))
#define THEME_TWISTER_TWISTER7_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), THEME_TWISTER_TYPE_TWISTER7, ThemeTwisterTwister7Class))

typedef struct _ThemeTwisterTwister7 ThemeTwisterTwister7;
typedef struct _ThemeTwisterTwister7Class ThemeTwisterTwister7Class;

#define THEME_TWISTER_TYPE_TWISTER10 (theme_twister_twister10_get_type ())
#define THEME_TWISTER_TWISTER10(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), THEME_TWISTER_TYPE_TWISTER10, ThemeTwisterTwister10))
#define THEME_TWISTER_TWISTER10_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), THEME_TWISTER_TYPE_TWISTER10, ThemeTwisterTwister10Class))
#define THEME_TWISTER_IS_TWISTER10(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), THEME_TWISTER_TYPE_TWISTER10))
#define THEME_TWISTER_IS_TWISTER10_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), THEME_TWISTER_TYPE_TWISTER10))
#define THEME_TWISTER_TWISTER10_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), THEME_TWISTER_TYPE_TWISTER10, ThemeTwisterTwister10Class))

typedef struct _ThemeTwisterTwister10 ThemeTwisterTwister10;
typedef struct _ThemeTwisterTwister10Class ThemeTwisterTwister10Class;

#define THEME_TWISTER_TYPE_TWISTER11 (theme_twister_twister11_get_type ())
#define THEME_TWISTER_TWISTER11(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), THEME_TWISTER_TYPE_TWISTER11, ThemeTwisterTwister11))
#define THEME_TWISTER_TWISTER11_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), THEME_TWISTER_TYPE_TWISTER11, ThemeTwisterTwister11Class))
#define THEME_TWISTER_IS_TWISTER11(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), THEME_TWISTER_TYPE_TWISTER11))
#define THEME_TWISTER_IS_TWISTER11_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), THEME_TWISTER_TYPE_TWISTER11))
#define THEME_TWISTER_TWISTER11_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), THEME_TWISTER_TYPE_TWISTER11, ThemeTwisterTwister11Class))

typedef struct _ThemeTwisterTwister11 ThemeTwisterTwister11;
typedef struct _ThemeTwisterTwister11Class ThemeTwisterTwister11Class;

#define THEME_TWISTER_TYPE_ITWISTER (theme_twister_itwister_get_type ())
#define THEME_TWISTER_ITWISTER(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), THEME_TWISTER_TYPE_ITWISTER, ThemeTwisteriTwister))
#define THEME_TWISTER_ITWISTER_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), THEME_TWISTER_TYPE_ITWISTER, ThemeTwisteriTwisterClass))
#define THEME_TWISTER_IS_ITWISTER(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), THEME_TWISTER_TYPE_ITWISTER))
#define THEME_TWISTER_IS_ITWISTER_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), THEME_TWISTER_TYPE_ITWISTER))
#define THEME_TWISTER_ITWISTER_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), THEME_TWISTER_TYPE_ITWISTER, ThemeTwisteriTwisterClass))

typedef struct _ThemeTwisteriTwister ThemeTwisteriTwister;
typedef struct _ThemeTwisteriTwisterClass ThemeTwisteriTwisterClass;

#define THEME_TWISTER_TYPE_ITWISTER_SUR (theme_twister_itwister_sur_get_type ())
#define THEME_TWISTER_ITWISTER_SUR(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), THEME_TWISTER_TYPE_ITWISTER_SUR, ThemeTwisteriTwisterSur))
#define THEME_TWISTER_ITWISTER_SUR_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), THEME_TWISTER_TYPE_ITWISTER_SUR, ThemeTwisteriTwisterSurClass))
#define THEME_TWISTER_IS_ITWISTER_SUR(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), THEME_TWISTER_TYPE_ITWISTER_SUR))
#define THEME_TWISTER_IS_ITWISTER_SUR_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), THEME_TWISTER_TYPE_ITWISTER_SUR))
#define THEME_TWISTER_ITWISTER_SUR_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), THEME_TWISTER_TYPE_ITWISTER_SUR, ThemeTwisteriTwisterSurClass))

typedef struct _ThemeTwisteriTwisterSur ThemeTwisteriTwisterSur;
typedef struct _ThemeTwisteriTwisterSurClass ThemeTwisteriTwisterSurClass;
typedef struct _Block1Data Block1Data;
#define _g_error_free0(var) ((var == NULL) ? NULL : (var = (g_error_free (var), NULL)))

struct _ThemeTwisterWindow {
	GtkWindow parent_instance;
	ThemeTwisterWindowPrivate * priv;
};

struct _ThemeTwisterWindowClass {
	GtkWindowClass parent_class;
};

struct _ThemeTwisterWindowPrivate {
	GtkStack* stack;
	gint current_page;
	GtkButton* cancel_or_previous;
	GtkButton* next;
};

struct _Block1Data {
	int _ref_count_;
	GtkApplication* app;
};


static gint ThemeTwisterWindow_private_offset;
static gpointer theme_twister_window_parent_class = NULL;

GType theme_twister_window_get_type (void) G_GNUC_CONST;
ThemeTwisterWindow* theme_twister_window_new (void);
ThemeTwisterWindow* theme_twister_window_construct (GType object_type);
static void __lambda4_ (ThemeTwisterWindow* self);
static void theme_twister_window_destroy (ThemeTwisterWindow* self);
static void ___lambda4__gtk_button_clicked (GtkButton* _sender,
                                     gpointer self);
static void __lambda5_ (ThemeTwisterWindow* self);
static void ___lambda5__gtk_button_clicked (GtkButton* _sender,
                                     gpointer self);
ThemeTwisterWelcome* theme_twister_welcome_new (void);
ThemeTwisterWelcome* theme_twister_welcome_construct (GType object_type);
GType theme_twister_welcome_get_type (void) G_GNUC_CONST;
ThemeTwisterTwisterOS* theme_twister_twister_os_new (void);
ThemeTwisterTwisterOS* theme_twister_twister_os_construct (GType object_type);
GType theme_twister_twister_os_get_type (void) G_GNUC_CONST;
ThemeTwisterTwister95* theme_twister_twister95_new (void);
ThemeTwisterTwister95* theme_twister_twister95_construct (GType object_type);
GType theme_twister_twister95_get_type (void) G_GNUC_CONST;
ThemeTwisterTwisterXP* theme_twister_twister_xp_new (void);
ThemeTwisterTwisterXP* theme_twister_twister_xp_construct (GType object_type);
GType theme_twister_twister_xp_get_type (void) G_GNUC_CONST;
ThemeTwisterTwister7* theme_twister_twister7_new (void);
ThemeTwisterTwister7* theme_twister_twister7_construct (GType object_type);
GType theme_twister_twister7_get_type (void) G_GNUC_CONST;
ThemeTwisterTwister10* theme_twister_twister10_new (void);
ThemeTwisterTwister10* theme_twister_twister10_construct (GType object_type);
GType theme_twister_twister10_get_type (void) G_GNUC_CONST;
ThemeTwisterTwister11* theme_twister_twister11_new (void);
ThemeTwisterTwister11* theme_twister_twister11_construct (GType object_type);
GType theme_twister_twister11_get_type (void) G_GNUC_CONST;
ThemeTwisteriTwister* theme_twister_itwister_new (void);
ThemeTwisteriTwister* theme_twister_itwister_construct (GType object_type);
GType theme_twister_itwister_get_type (void) G_GNUC_CONST;
ThemeTwisteriTwisterSur* theme_twister_itwister_sur_new (void);
ThemeTwisteriTwisterSur* theme_twister_itwister_sur_construct (GType object_type);
GType theme_twister_itwister_sur_get_type (void) G_GNUC_CONST;
static void theme_twister_window_finalize (GObject * obj);
gint _vala_main (gchar** args,
                 int args_length1);
static Block1Data* block1_data_ref (Block1Data* _data1_);
static void block1_data_unref (void * _userdata_);
static void __lambda19_ (Block1Data* _data1_);
static void ___lambda19__g_application_activate (GApplication* _sender,
                                          gpointer self);


static inline gpointer
theme_twister_window_get_instance_private (ThemeTwisterWindow* self)
{
	return G_STRUCT_MEMBER_P (self, ThemeTwisterWindow_private_offset);
}


static void
__lambda4_ (ThemeTwisterWindow* self)
{
	GtkButton* _tmp0_;
	gint _tmp1_;
	_tmp0_ = self->priv->next;
	gtk_button_set_label (_tmp0_, "Next");
	_tmp1_ = self->priv->current_page;
	if (_tmp1_ > 1) {
		gint _tmp2_;
		gint _tmp3_;
		GtkStack* _tmp5_;
		gint _tmp6_;
		gchar* _tmp7_;
		gchar* _tmp8_;
		_tmp2_ = self->priv->current_page;
		self->priv->current_page = _tmp2_ - 1;
		_tmp3_ = self->priv->current_page;
		if (_tmp3_ == 1) {
			GtkButton* _tmp4_;
			_tmp4_ = self->priv->cancel_or_previous;
			gtk_button_set_label (_tmp4_, "Cancel");
		}
		_tmp5_ = self->priv->stack;
		_tmp6_ = self->priv->current_page;
		_tmp7_ = g_strdup_printf ("%i", _tmp6_);
		_tmp8_ = _tmp7_;
		gtk_stack_set_visible_child_name (_tmp5_, _tmp8_);
		_g_free0 (_tmp8_);
	} else {
		theme_twister_window_destroy (self);
	}
}


static void
___lambda4__gtk_button_clicked (GtkButton* _sender,
                                gpointer self)
{
	__lambda4_ ((ThemeTwisterWindow*) self);
}


static void
__lambda5_ (ThemeTwisterWindow* self)
{
	GtkButton* _tmp0_;
	gint _tmp1_;
	_tmp0_ = self->priv->cancel_or_previous;
	gtk_button_set_label (_tmp0_, "Previous");
	_tmp1_ = self->priv->current_page;
	if (_tmp1_ < 2) {
		gint _tmp2_;
		GtkStack* _tmp3_;
		gint _tmp4_;
		gchar* _tmp5_;
		gchar* _tmp6_;
		gint _tmp7_;
		_tmp2_ = self->priv->current_page;
		self->priv->current_page = _tmp2_ + 1;
		_tmp3_ = self->priv->stack;
		_tmp4_ = self->priv->current_page;
		_tmp5_ = g_strdup_printf ("%i", _tmp4_);
		_tmp6_ = _tmp5_;
		gtk_stack_set_visible_child_name (_tmp3_, _tmp6_);
		_g_free0 (_tmp6_);
		_tmp7_ = self->priv->current_page;
		if (_tmp7_ == 2) {
			GtkButton* _tmp8_;
			_tmp8_ = self->priv->next;
			gtk_button_set_label (_tmp8_, "Close");
		}
	} else {
		theme_twister_window_destroy (self);
	}
}


static void
___lambda5__gtk_button_clicked (GtkButton* _sender,
                                gpointer self)
{
	__lambda5_ ((ThemeTwisterWindow*) self);
}


ThemeTwisterWindow*
theme_twister_window_construct (GType object_type)
{
	ThemeTwisterWindow * self = NULL;
	GdkScreen* _tmp0_;
	GdkVisual* _tmp1_;
	GtkGrid* grid = NULL;
	GtkGrid* _tmp2_;
	GtkStyleContext* _tmp3_;
	GtkStack* _tmp4_;
	GtkStack* _tmp5_;
	GtkStack* _tmp6_;
	GtkStack* _tmp7_;
	GtkStack* _tmp8_;
	GtkStack* _tmp9_;
	GtkButton* _tmp10_;
	GtkButton* _tmp11_;
	GtkStyleContext* _tmp12_;
	GtkButton* _tmp13_;
	GtkButton* _tmp14_;
	GtkButton* _tmp15_;
	GtkButton* _tmp16_;
	GtkStyleContext* _tmp17_;
	GtkButton* _tmp18_;
	GtkButton* _tmp19_;
	GtkBox* main_box = NULL;
	GtkBox* _tmp20_;
	GtkStyleContext* _tmp21_;
	GtkStack* _tmp22_;
	ThemeTwisterWelcome* _tmp23_;
	ThemeTwisterWelcome* _tmp24_;
	GtkBox* box1 = NULL;
	GtkBox* _tmp25_;
	GtkStyleContext* _tmp26_;
	ThemeTwisterTwisterOS* _tmp27_;
	ThemeTwisterTwisterOS* _tmp28_;
	ThemeTwisterTwister95* _tmp29_;
	ThemeTwisterTwister95* _tmp30_;
	ThemeTwisterTwisterXP* _tmp31_;
	ThemeTwisterTwisterXP* _tmp32_;
	ThemeTwisterTwister7* _tmp33_;
	ThemeTwisterTwister7* _tmp34_;
	GtkBox* box2 = NULL;
	GtkBox* _tmp35_;
	GtkStyleContext* _tmp36_;
	ThemeTwisterTwister10* _tmp37_;
	ThemeTwisterTwister10* _tmp38_;
	ThemeTwisterTwister11* _tmp39_;
	ThemeTwisterTwister11* _tmp40_;
	ThemeTwisteriTwister* _tmp41_;
	ThemeTwisteriTwister* _tmp42_;
	ThemeTwisteriTwisterSur* _tmp43_;
	ThemeTwisteriTwisterSur* _tmp44_;
	GtkStack* _tmp45_;
	self = (ThemeTwisterWindow*) g_object_new (object_type, NULL);
	gtk_window_set_title ((GtkWindow*) self, "themetwister");
	gtk_window_set_skip_pager_hint ((GtkWindow*) self, TRUE);
	gtk_window_set_skip_taskbar_hint ((GtkWindow*) self, TRUE);
	gtk_window_set_decorated ((GtkWindow*) self, FALSE);
	gtk_widget_set_app_paintable ((GtkWidget*) self, TRUE);
	_tmp0_ = gtk_window_get_screen ((GtkWindow*) self);
	_tmp1_ = gdk_screen_get_rgba_visual (_tmp0_);
	gtk_widget_set_visual ((GtkWidget*) self, _tmp1_);
	gtk_window_set_type_hint ((GtkWindow*) self, GDK_WINDOW_TYPE_HINT_NORMAL);
	gtk_window_set_resizable ((GtkWindow*) self, FALSE);
	g_object_set ((GtkWindow*) self, "window-position", GTK_WIN_POS_CENTER, NULL);
	gtk_window_set_default_size ((GtkWindow*) self, 800, 400);
	_tmp2_ = (GtkGrid*) gtk_grid_new ();
	g_object_ref_sink (_tmp2_);
	grid = _tmp2_;
	_tmp3_ = gtk_widget_get_style_context ((GtkWidget*) grid);
	gtk_style_context_add_class (_tmp3_, "themetwister");
	gtk_container_add ((GtkContainer*) self, (GtkWidget*) grid);
	_tmp4_ = (GtkStack*) gtk_stack_new ();
	g_object_ref_sink (_tmp4_);
	_g_object_unref0 (self->priv->stack);
	self->priv->stack = _tmp4_;
	_tmp5_ = self->priv->stack;
	gtk_stack_set_transition_type (_tmp5_, GTK_STACK_TRANSITION_TYPE_SLIDE_LEFT_RIGHT);
	_tmp6_ = self->priv->stack;
	gtk_stack_set_transition_duration (_tmp6_, (guint) 500);
	_tmp7_ = self->priv->stack;
	gtk_widget_set_vexpand ((GtkWidget*) _tmp7_, TRUE);
	_tmp8_ = self->priv->stack;
	gtk_widget_set_hexpand ((GtkWidget*) _tmp8_, TRUE);
	_tmp9_ = self->priv->stack;
	gtk_grid_attach (grid, (GtkWidget*) _tmp9_, 0, 0, 2, 1);
	_tmp10_ = (GtkButton*) gtk_button_new_with_label ("Cancel");
	g_object_ref_sink (_tmp10_);
	_g_object_unref0 (self->priv->cancel_or_previous);
	self->priv->cancel_or_previous = _tmp10_;
	_tmp11_ = self->priv->cancel_or_previous;
	_tmp12_ = gtk_widget_get_style_context ((GtkWidget*) _tmp11_);
	gtk_style_context_add_class (_tmp12_, "cancel_or_previous");
	_tmp13_ = self->priv->cancel_or_previous;
	g_signal_connect_object (_tmp13_, "clicked", (GCallback) ___lambda4__gtk_button_clicked, self, 0);
	_tmp14_ = self->priv->cancel_or_previous;
	gtk_grid_attach (grid, (GtkWidget*) _tmp14_, 0, 1, 1, 1);
	_tmp15_ = (GtkButton*) gtk_button_new_with_label ("Next");
	g_object_ref_sink (_tmp15_);
	_g_object_unref0 (self->priv->next);
	self->priv->next = _tmp15_;
	_tmp16_ = self->priv->next;
	_tmp17_ = gtk_widget_get_style_context ((GtkWidget*) _tmp16_);
	gtk_style_context_add_class (_tmp17_, "next");
	_tmp18_ = self->priv->next;
	g_signal_connect_object (_tmp18_, "clicked", (GCallback) ___lambda5__gtk_button_clicked, self, 0);
	_tmp19_ = self->priv->next;
	gtk_grid_attach (grid, (GtkWidget*) _tmp19_, 1, 1, 1, 1);
	_tmp20_ = (GtkBox*) gtk_box_new (GTK_ORIENTATION_VERTICAL, 0);
	g_object_ref_sink (_tmp20_);
	main_box = _tmp20_;
	_tmp21_ = gtk_widget_get_style_context ((GtkWidget*) main_box);
	gtk_style_context_add_class (_tmp21_, "themetwister_box");
	_tmp22_ = self->priv->stack;
	_tmp23_ = theme_twister_welcome_new ();
	g_object_ref_sink (_tmp23_);
	_tmp24_ = _tmp23_;
	gtk_stack_add_named (_tmp22_, (GtkWidget*) _tmp24_, "1");
	_g_object_unref0 (_tmp24_);
	_tmp25_ = (GtkBox*) gtk_box_new (GTK_ORIENTATION_HORIZONTAL, 0);
	g_object_ref_sink (_tmp25_);
	box1 = _tmp25_;
	_tmp26_ = gtk_widget_get_style_context ((GtkWidget*) box1);
	gtk_style_context_add_class (_tmp26_, "themetwister_main_box");
	_tmp27_ = theme_twister_twister_os_new ();
	g_object_ref_sink (_tmp27_);
	_tmp28_ = _tmp27_;
	gtk_container_add ((GtkContainer*) box1, (GtkWidget*) _tmp28_);
	_g_object_unref0 (_tmp28_);
	_tmp29_ = theme_twister_twister95_new ();
	g_object_ref_sink (_tmp29_);
	_tmp30_ = _tmp29_;
	gtk_container_add ((GtkContainer*) box1, (GtkWidget*) _tmp30_);
	_g_object_unref0 (_tmp30_);
	_tmp31_ = theme_twister_twister_xp_new ();
	g_object_ref_sink (_tmp31_);
	_tmp32_ = _tmp31_;
	gtk_container_add ((GtkContainer*) box1, (GtkWidget*) _tmp32_);
	_g_object_unref0 (_tmp32_);
	_tmp33_ = theme_twister_twister7_new ();
	g_object_ref_sink (_tmp33_);
	_tmp34_ = _tmp33_;
	gtk_container_add ((GtkContainer*) box1, (GtkWidget*) _tmp34_);
	_g_object_unref0 (_tmp34_);
	gtk_container_add ((GtkContainer*) main_box, (GtkWidget*) box1);
	_tmp35_ = (GtkBox*) gtk_box_new (GTK_ORIENTATION_HORIZONTAL, 0);
	g_object_ref_sink (_tmp35_);
	box2 = _tmp35_;
	_tmp36_ = gtk_widget_get_style_context ((GtkWidget*) box2);
	gtk_style_context_add_class (_tmp36_, "themetwister_main_box2");
	_tmp37_ = theme_twister_twister10_new ();
	g_object_ref_sink (_tmp37_);
	_tmp38_ = _tmp37_;
	gtk_container_add ((GtkContainer*) box2, (GtkWidget*) _tmp38_);
	_g_object_unref0 (_tmp38_);
	_tmp39_ = theme_twister_twister11_new ();
	g_object_ref_sink (_tmp39_);
	_tmp40_ = _tmp39_;
	gtk_container_add ((GtkContainer*) box2, (GtkWidget*) _tmp40_);
	_g_object_unref0 (_tmp40_);
	_tmp41_ = theme_twister_itwister_new ();
	g_object_ref_sink (_tmp41_);
	_tmp42_ = _tmp41_;
	gtk_container_add ((GtkContainer*) box2, (GtkWidget*) _tmp42_);
	_g_object_unref0 (_tmp42_);
	_tmp43_ = theme_twister_itwister_sur_new ();
	g_object_ref_sink (_tmp43_);
	_tmp44_ = _tmp43_;
	gtk_container_add ((GtkContainer*) box2, (GtkWidget*) _tmp44_);
	_g_object_unref0 (_tmp44_);
	gtk_container_add ((GtkContainer*) main_box, (GtkWidget*) box2);
	_tmp45_ = self->priv->stack;
	gtk_stack_add_named (_tmp45_, (GtkWidget*) main_box, "2");
	gtk_widget_show_all ((GtkWidget*) self);
	_g_object_unref0 (box2);
	_g_object_unref0 (box1);
	_g_object_unref0 (main_box);
	_g_object_unref0 (grid);
	return self;
}


ThemeTwisterWindow*
theme_twister_window_new (void)
{
	return theme_twister_window_construct (TYPE_THEME_TWISTER_WINDOW);
}


static void
theme_twister_window_destroy (ThemeTwisterWindow* self)
{
	g_return_if_fail (self != NULL);
	GTK_WIDGET_CLASS (theme_twister_window_parent_class)->destroy ((GtkWidget*) G_TYPE_CHECK_INSTANCE_CAST (self, gtk_window_get_type (), GtkWindow));
	gtk_main_quit ();
}


static void
theme_twister_window_class_init (ThemeTwisterWindowClass * klass)
{
	theme_twister_window_parent_class = g_type_class_peek_parent (klass);
	g_type_class_adjust_private_offset (klass, &ThemeTwisterWindow_private_offset);
	G_OBJECT_CLASS (klass)->finalize = theme_twister_window_finalize;
}


static void
theme_twister_window_instance_init (ThemeTwisterWindow * self)
{
	self->priv = theme_twister_window_get_instance_private (self);
	self->priv->current_page = 1;
}


static void
theme_twister_window_finalize (GObject * obj)
{
	ThemeTwisterWindow * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, TYPE_THEME_TWISTER_WINDOW, ThemeTwisterWindow);
	_g_object_unref0 (self->priv->stack);
	_g_object_unref0 (self->priv->cancel_or_previous);
	_g_object_unref0 (self->priv->next);
	G_OBJECT_CLASS (theme_twister_window_parent_class)->finalize (obj);
}


GType
theme_twister_window_get_type (void)
{
	static volatile gsize theme_twister_window_type_id__volatile = 0;
	if (g_once_init_enter (&theme_twister_window_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (ThemeTwisterWindowClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) theme_twister_window_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (ThemeTwisterWindow), 0, (GInstanceInitFunc) theme_twister_window_instance_init, NULL };
		GType theme_twister_window_type_id;
		theme_twister_window_type_id = g_type_register_static (gtk_window_get_type (), "ThemeTwisterWindow", &g_define_type_info, 0);
		ThemeTwisterWindow_private_offset = g_type_add_instance_private (theme_twister_window_type_id, sizeof (ThemeTwisterWindowPrivate));
		g_once_init_leave (&theme_twister_window_type_id__volatile, theme_twister_window_type_id);
	}
	return theme_twister_window_type_id__volatile;
}


static Block1Data*
block1_data_ref (Block1Data* _data1_)
{
	g_atomic_int_inc (&_data1_->_ref_count_);
	return _data1_;
}


static void
block1_data_unref (void * _userdata_)
{
	Block1Data* _data1_;
	_data1_ = (Block1Data*) _userdata_;
	if (g_atomic_int_dec_and_test (&_data1_->_ref_count_)) {
		_g_object_unref0 (_data1_->app);
		g_slice_free (Block1Data, _data1_);
	}
}


static void
__lambda19_ (Block1Data* _data1_)
{
	GtkApplication* _tmp0_;
	GList* _tmp1_;
	_tmp0_ = _data1_->app;
	_tmp1_ = gtk_application_get_windows (_tmp0_);
	if (g_list_length (_tmp1_) == ((guint) 0)) {
		ThemeTwisterWindow* main_window = NULL;
		ThemeTwisterWindow* _tmp2_;
		ThemeTwisterWindow* _tmp3_;
		GtkApplication* _tmp4_;
		ThemeTwisterWindow* _tmp5_;
		_tmp2_ = theme_twister_window_new ();
		g_object_ref_sink (_tmp2_);
		main_window = _tmp2_;
		_tmp3_ = main_window;
		_tmp4_ = _data1_->app;
		gtk_window_set_application ((GtkWindow*) _tmp3_, _tmp4_);
		_tmp5_ = main_window;
		gtk_widget_show ((GtkWidget*) _tmp5_);
		gtk_main ();
		_g_object_unref0 (main_window);
	}
}


static void
___lambda19__g_application_activate (GApplication* _sender,
                                     gpointer self)
{
	__lambda19_ (self);
}


gint
_vala_main (gchar** args,
            int args_length1)
{
	gint result = 0;
	Block1Data* _data1_;
	GtkApplication* _tmp0_;
	GFile* iraspbian = NULL;
	const gchar* _tmp1_;
	gchar* _tmp2_;
	gchar* _tmp3_;
	GFile* _tmp4_;
	GFile* _tmp5_;
	GFile* nighthawk = NULL;
	const gchar* _tmp6_;
	gchar* _tmp7_;
	gchar* _tmp8_;
	GFile* _tmp9_;
	GFile* _tmp10_;
	GFile* twisteros = NULL;
	const gchar* _tmp11_;
	gchar* _tmp12_;
	gchar* _tmp13_;
	GFile* _tmp14_;
	GFile* _tmp15_;
	GFile* twister11 = NULL;
	const gchar* _tmp16_;
	gchar* _tmp17_;
	gchar* _tmp18_;
	GFile* _tmp19_;
	GFile* _tmp20_;
	GFile* iraspbiansur = NULL;
	const gchar* _tmp21_;
	gchar* _tmp22_;
	gchar* _tmp23_;
	GFile* _tmp24_;
	GFile* _tmp25_;
	const gchar* _tmp26_ = NULL;
	gboolean _tmp27_ = FALSE;
	gboolean _tmp28_ = FALSE;
	gboolean _tmp29_ = FALSE;
	GFile* _tmp30_;
	gchar* css_file = NULL;
	gchar* _tmp34_;
	GtkCssProvider* css_provider = NULL;
	GtkCssProvider* _tmp35_;
	GtkApplication* _tmp38_;
	GtkApplication* _tmp39_;
	GError * _inner_error_ = NULL;
	_data1_ = g_slice_new0 (Block1Data);
	_data1_->_ref_count_ = 1;
	gtk_init (&args_length1, &args);
	_tmp0_ = gtk_application_new ("dk.krishenriksen.themetwister", G_APPLICATION_FLAGS_NONE);
	_data1_->app = _tmp0_;
	_tmp1_ = g_getenv ("HOME");
	_tmp2_ = g_strconcat (_tmp1_, "/.iraspbian-dark.twid", NULL);
	_tmp3_ = _tmp2_;
	_tmp4_ = g_file_new_for_path (_tmp3_);
	_tmp5_ = _tmp4_;
	_g_free0 (_tmp3_);
	iraspbian = _tmp5_;
	_tmp6_ = g_getenv ("HOME");
	_tmp7_ = g_strconcat (_tmp6_, "/.nighthawk.twid", NULL);
	_tmp8_ = _tmp7_;
	_tmp9_ = g_file_new_for_path (_tmp8_);
	_tmp10_ = _tmp9_;
	_g_free0 (_tmp8_);
	nighthawk = _tmp10_;
	_tmp11_ = g_getenv ("HOME");
	_tmp12_ = g_strconcat (_tmp11_, "/.twisteros-dark.twid", NULL);
	_tmp13_ = _tmp12_;
	_tmp14_ = g_file_new_for_path (_tmp13_);
	_tmp15_ = _tmp14_;
	_g_free0 (_tmp13_);
	twisteros = _tmp15_;
	_tmp16_ = g_getenv ("HOME");
	_tmp17_ = g_strconcat (_tmp16_, "/.twister11-dark.twid", NULL);
	_tmp18_ = _tmp17_;
	_tmp19_ = g_file_new_for_path (_tmp18_);
	_tmp20_ = _tmp19_;
	_g_free0 (_tmp18_);
	twister11 = _tmp20_;
	_tmp21_ = g_getenv ("HOME");
	_tmp22_ = g_strconcat (_tmp21_, "/.iraspbiansur-dark.twid", NULL);
	_tmp23_ = _tmp22_;
	_tmp24_ = g_file_new_for_path (_tmp23_);
	_tmp25_ = _tmp24_;
	_g_free0 (_tmp23_);
	iraspbiansur = _tmp25_;
	_tmp30_ = iraspbian;
	if (g_file_query_exists (_tmp30_, NULL)) {
		_tmp29_ = TRUE;
	} else {
		GFile* _tmp31_;
		_tmp31_ = nighthawk;
		_tmp29_ = g_file_query_exists (_tmp31_, NULL);
	}
	if (_tmp29_) {
		_tmp28_ = TRUE;
	} else {
		GFile* _tmp32_;
		_tmp32_ = twisteros;
		_tmp28_ = g_file_query_exists (_tmp32_, NULL);
	}
	if (_tmp28_) {
		_tmp27_ = TRUE;
	} else {
		GFile* _tmp33_;
		_tmp33_ = iraspbiansur;
		_tmp27_ = g_file_query_exists (_tmp33_, NULL);
	}
	if (_tmp27_) {
		_tmp26_ = "themetwister_dark.css";
	} else {
		_tmp26_ = "themetwister.css";
	}
	_tmp34_ = g_strconcat (PACKAGE_SHAREDIR "/" PROJECT_NAME "/", _tmp26_, NULL);
	css_file = _tmp34_;
	_tmp35_ = gtk_css_provider_new ();
	css_provider = _tmp35_;
	{
		GdkScreen* _tmp36_;
		gtk_css_provider_load_from_path (css_provider, css_file, &_inner_error_);
		if (G_UNLIKELY (_inner_error_ != NULL)) {
			goto __catch0_g_error;
		}
		_tmp36_ = gdk_screen_get_default ();
		gtk_style_context_add_provider_for_screen (_tmp36_, (GtkStyleProvider*) css_provider, (guint) GTK_STYLE_PROVIDER_PRIORITY_USER);
	}
	goto __finally0;
	__catch0_g_error:
	{
		GError* e = NULL;
		e = _inner_error_;
		_inner_error_ = NULL;
		g_warning ("Application.vala:155: Could not load CSS file: %s", css_file);
		_g_error_free0 (e);
	}
	__finally0:
	if (G_UNLIKELY (_inner_error_ != NULL)) {
		gint _tmp37_ = -1;
		_g_object_unref0 (css_provider);
		_g_free0 (css_file);
		_g_object_unref0 (iraspbiansur);
		_g_object_unref0 (twister11);
		_g_object_unref0 (twisteros);
		_g_object_unref0 (nighthawk);
		_g_object_unref0 (iraspbian);
		block1_data_unref (_data1_);
		_data1_ = NULL;
		g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
		g_clear_error (&_inner_error_);
		return _tmp37_;
	}
	_tmp38_ = _data1_->app;
	g_signal_connect_data ((GApplication*) _tmp38_, "activate", (GCallback) ___lambda19__g_application_activate, block1_data_ref (_data1_), (GClosureNotify) block1_data_unref, 0);
	_tmp39_ = _data1_->app;
	g_application_run ((GApplication*) _tmp39_, args_length1, args);
	result = 1;
	_g_object_unref0 (css_provider);
	_g_free0 (css_file);
	_g_object_unref0 (iraspbiansur);
	_g_object_unref0 (twister11);
	_g_object_unref0 (twisteros);
	_g_object_unref0 (nighthawk);
	_g_object_unref0 (iraspbian);
	block1_data_unref (_data1_);
	_data1_ = NULL;
	return result;
}


int
main (int argc,
      char ** argv)
{
	return _vala_main (argv, argc);
}



