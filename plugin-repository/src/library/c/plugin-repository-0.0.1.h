/* plugin-repository-0.0.1.h generated by valac 0.32.1, the Vala compiler, do not modify */


#ifndef __SRC_LIBRARY_C_PLUGIN_REPOSITORY_0_0_1_H__
#define __SRC_LIBRARY_C_PLUGIN_REPOSITORY_0_0_1_H__

#include <glib.h>
#include <bob-0.0.1.h>
#include <glib-object.h>
#include <stdlib.h>
#include <string.h>

G_BEGIN_DECLS


#define BOB_BUILDER_BUILD_PLUGIN_TYPE_COPY_LIBRARY_FROM_REPOSITORY_PLUGIN (bob_builder_build_plugin_copy_library_from_repository_plugin_get_type ())
#define BOB_BUILDER_BUILD_PLUGIN_COPY_LIBRARY_FROM_REPOSITORY_PLUGIN(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), BOB_BUILDER_BUILD_PLUGIN_TYPE_COPY_LIBRARY_FROM_REPOSITORY_PLUGIN, bobbuilderbuildpluginCopyLibraryFromRepositoryPlugin))
#define BOB_BUILDER_BUILD_PLUGIN_COPY_LIBRARY_FROM_REPOSITORY_PLUGIN_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), BOB_BUILDER_BUILD_PLUGIN_TYPE_COPY_LIBRARY_FROM_REPOSITORY_PLUGIN, bobbuilderbuildpluginCopyLibraryFromRepositoryPluginClass))
#define BOB_BUILDER_BUILD_PLUGIN_IS_COPY_LIBRARY_FROM_REPOSITORY_PLUGIN(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), BOB_BUILDER_BUILD_PLUGIN_TYPE_COPY_LIBRARY_FROM_REPOSITORY_PLUGIN))
#define BOB_BUILDER_BUILD_PLUGIN_IS_COPY_LIBRARY_FROM_REPOSITORY_PLUGIN_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), BOB_BUILDER_BUILD_PLUGIN_TYPE_COPY_LIBRARY_FROM_REPOSITORY_PLUGIN))
#define BOB_BUILDER_BUILD_PLUGIN_COPY_LIBRARY_FROM_REPOSITORY_PLUGIN_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), BOB_BUILDER_BUILD_PLUGIN_TYPE_COPY_LIBRARY_FROM_REPOSITORY_PLUGIN, bobbuilderbuildpluginCopyLibraryFromRepositoryPluginClass))

typedef struct _bobbuilderbuildpluginCopyLibraryFromRepositoryPlugin bobbuilderbuildpluginCopyLibraryFromRepositoryPlugin;
typedef struct _bobbuilderbuildpluginCopyLibraryFromRepositoryPluginClass bobbuilderbuildpluginCopyLibraryFromRepositoryPluginClass;
typedef struct _bobbuilderbuildpluginCopyLibraryFromRepositoryPluginPrivate bobbuilderbuildpluginCopyLibraryFromRepositoryPluginPrivate;

#define BOB_BUILDER_BUILD_PLUGIN_TYPE_INSTALL_IN_LOCAL_REPOSITORY_PLUGIN (bob_builder_build_plugin_install_in_local_repository_plugin_get_type ())
#define BOB_BUILDER_BUILD_PLUGIN_INSTALL_IN_LOCAL_REPOSITORY_PLUGIN(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), BOB_BUILDER_BUILD_PLUGIN_TYPE_INSTALL_IN_LOCAL_REPOSITORY_PLUGIN, bobbuilderbuildpluginInstallInLocalRepositoryPlugin))
#define BOB_BUILDER_BUILD_PLUGIN_INSTALL_IN_LOCAL_REPOSITORY_PLUGIN_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), BOB_BUILDER_BUILD_PLUGIN_TYPE_INSTALL_IN_LOCAL_REPOSITORY_PLUGIN, bobbuilderbuildpluginInstallInLocalRepositoryPluginClass))
#define BOB_BUILDER_BUILD_PLUGIN_IS_INSTALL_IN_LOCAL_REPOSITORY_PLUGIN(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), BOB_BUILDER_BUILD_PLUGIN_TYPE_INSTALL_IN_LOCAL_REPOSITORY_PLUGIN))
#define BOB_BUILDER_BUILD_PLUGIN_IS_INSTALL_IN_LOCAL_REPOSITORY_PLUGIN_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), BOB_BUILDER_BUILD_PLUGIN_TYPE_INSTALL_IN_LOCAL_REPOSITORY_PLUGIN))
#define BOB_BUILDER_BUILD_PLUGIN_INSTALL_IN_LOCAL_REPOSITORY_PLUGIN_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), BOB_BUILDER_BUILD_PLUGIN_TYPE_INSTALL_IN_LOCAL_REPOSITORY_PLUGIN, bobbuilderbuildpluginInstallInLocalRepositoryPluginClass))

typedef struct _bobbuilderbuildpluginInstallInLocalRepositoryPlugin bobbuilderbuildpluginInstallInLocalRepositoryPlugin;
typedef struct _bobbuilderbuildpluginInstallInLocalRepositoryPluginClass bobbuilderbuildpluginInstallInLocalRepositoryPluginClass;
typedef struct _bobbuilderbuildpluginInstallInLocalRepositoryPluginPrivate bobbuilderbuildpluginInstallInLocalRepositoryPluginPrivate;

#define BOB_BUILDER_BUILD_PLUGIN_TYPE_REPOSITORY_DEPENDENCY_SCANNER (bob_builder_build_plugin_repository_dependency_scanner_get_type ())
#define BOB_BUILDER_BUILD_PLUGIN_REPOSITORY_DEPENDENCY_SCANNER(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), BOB_BUILDER_BUILD_PLUGIN_TYPE_REPOSITORY_DEPENDENCY_SCANNER, bobbuilderbuildpluginRepositoryDependencyScanner))
#define BOB_BUILDER_BUILD_PLUGIN_REPOSITORY_DEPENDENCY_SCANNER_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), BOB_BUILDER_BUILD_PLUGIN_TYPE_REPOSITORY_DEPENDENCY_SCANNER, bobbuilderbuildpluginRepositoryDependencyScannerClass))
#define BOB_BUILDER_BUILD_PLUGIN_IS_REPOSITORY_DEPENDENCY_SCANNER(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), BOB_BUILDER_BUILD_PLUGIN_TYPE_REPOSITORY_DEPENDENCY_SCANNER))
#define BOB_BUILDER_BUILD_PLUGIN_IS_REPOSITORY_DEPENDENCY_SCANNER_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), BOB_BUILDER_BUILD_PLUGIN_TYPE_REPOSITORY_DEPENDENCY_SCANNER))
#define BOB_BUILDER_BUILD_PLUGIN_REPOSITORY_DEPENDENCY_SCANNER_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), BOB_BUILDER_BUILD_PLUGIN_TYPE_REPOSITORY_DEPENDENCY_SCANNER, bobbuilderbuildpluginRepositoryDependencyScannerClass))

typedef struct _bobbuilderbuildpluginRepositoryDependencyScanner bobbuilderbuildpluginRepositoryDependencyScanner;
typedef struct _bobbuilderbuildpluginRepositoryDependencyScannerClass bobbuilderbuildpluginRepositoryDependencyScannerClass;
typedef struct _bobbuilderbuildpluginRepositoryDependencyScannerPrivate bobbuilderbuildpluginRepositoryDependencyScannerPrivate;

#define BOB_BUILDER_BUILD_PLUGIN_TYPE_REPOSITORY_DIRECTORIES (bob_builder_build_plugin_repository_directories_get_type ())
#define BOB_BUILDER_BUILD_PLUGIN_REPOSITORY_DIRECTORIES(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), BOB_BUILDER_BUILD_PLUGIN_TYPE_REPOSITORY_DIRECTORIES, bobbuilderbuildpluginRepositoryDirectories))
#define BOB_BUILDER_BUILD_PLUGIN_IS_REPOSITORY_DIRECTORIES(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), BOB_BUILDER_BUILD_PLUGIN_TYPE_REPOSITORY_DIRECTORIES))
#define BOB_BUILDER_BUILD_PLUGIN_REPOSITORY_DIRECTORIES_GET_INTERFACE(obj) (G_TYPE_INSTANCE_GET_INTERFACE ((obj), BOB_BUILDER_BUILD_PLUGIN_TYPE_REPOSITORY_DIRECTORIES, bobbuilderbuildpluginRepositoryDirectoriesIface))

typedef struct _bobbuilderbuildpluginRepositoryDirectories bobbuilderbuildpluginRepositoryDirectories;
typedef struct _bobbuilderbuildpluginRepositoryDirectoriesIface bobbuilderbuildpluginRepositoryDirectoriesIface;

#define BOB_BUILDER_BUILD_PLUGIN_TYPE_REPOSITORY_PROJECT_DIRECTORY_STRUCTURE (bob_builder_build_plugin_repository_project_directory_structure_get_type ())
#define BOB_BUILDER_BUILD_PLUGIN_REPOSITORY_PROJECT_DIRECTORY_STRUCTURE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), BOB_BUILDER_BUILD_PLUGIN_TYPE_REPOSITORY_PROJECT_DIRECTORY_STRUCTURE, bobbuilderbuildpluginRepositoryProjectDirectoryStructure))
#define BOB_BUILDER_BUILD_PLUGIN_REPOSITORY_PROJECT_DIRECTORY_STRUCTURE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), BOB_BUILDER_BUILD_PLUGIN_TYPE_REPOSITORY_PROJECT_DIRECTORY_STRUCTURE, bobbuilderbuildpluginRepositoryProjectDirectoryStructureClass))
#define BOB_BUILDER_BUILD_PLUGIN_IS_REPOSITORY_PROJECT_DIRECTORY_STRUCTURE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), BOB_BUILDER_BUILD_PLUGIN_TYPE_REPOSITORY_PROJECT_DIRECTORY_STRUCTURE))
#define BOB_BUILDER_BUILD_PLUGIN_IS_REPOSITORY_PROJECT_DIRECTORY_STRUCTURE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), BOB_BUILDER_BUILD_PLUGIN_TYPE_REPOSITORY_PROJECT_DIRECTORY_STRUCTURE))
#define BOB_BUILDER_BUILD_PLUGIN_REPOSITORY_PROJECT_DIRECTORY_STRUCTURE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), BOB_BUILDER_BUILD_PLUGIN_TYPE_REPOSITORY_PROJECT_DIRECTORY_STRUCTURE, bobbuilderbuildpluginRepositoryProjectDirectoryStructureClass))

typedef struct _bobbuilderbuildpluginRepositoryProjectDirectoryStructure bobbuilderbuildpluginRepositoryProjectDirectoryStructure;
typedef struct _bobbuilderbuildpluginRepositoryProjectDirectoryStructureClass bobbuilderbuildpluginRepositoryProjectDirectoryStructureClass;
typedef struct _bobbuilderbuildpluginRepositoryProjectDirectoryStructurePrivate bobbuilderbuildpluginRepositoryProjectDirectoryStructurePrivate;

#define BOB_BUILDER_BUILD_PLUGIN_TYPE_SCAN_LOCAL_REPOSITORY_PLUGIN (bob_builder_build_plugin_scan_local_repository_plugin_get_type ())
#define BOB_BUILDER_BUILD_PLUGIN_SCAN_LOCAL_REPOSITORY_PLUGIN(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), BOB_BUILDER_BUILD_PLUGIN_TYPE_SCAN_LOCAL_REPOSITORY_PLUGIN, bobbuilderbuildpluginScanLocalRepositoryPlugin))
#define BOB_BUILDER_BUILD_PLUGIN_SCAN_LOCAL_REPOSITORY_PLUGIN_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), BOB_BUILDER_BUILD_PLUGIN_TYPE_SCAN_LOCAL_REPOSITORY_PLUGIN, bobbuilderbuildpluginScanLocalRepositoryPluginClass))
#define BOB_BUILDER_BUILD_PLUGIN_IS_SCAN_LOCAL_REPOSITORY_PLUGIN(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), BOB_BUILDER_BUILD_PLUGIN_TYPE_SCAN_LOCAL_REPOSITORY_PLUGIN))
#define BOB_BUILDER_BUILD_PLUGIN_IS_SCAN_LOCAL_REPOSITORY_PLUGIN_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), BOB_BUILDER_BUILD_PLUGIN_TYPE_SCAN_LOCAL_REPOSITORY_PLUGIN))
#define BOB_BUILDER_BUILD_PLUGIN_SCAN_LOCAL_REPOSITORY_PLUGIN_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), BOB_BUILDER_BUILD_PLUGIN_TYPE_SCAN_LOCAL_REPOSITORY_PLUGIN, bobbuilderbuildpluginScanLocalRepositoryPluginClass))

typedef struct _bobbuilderbuildpluginScanLocalRepositoryPlugin bobbuilderbuildpluginScanLocalRepositoryPlugin;
typedef struct _bobbuilderbuildpluginScanLocalRepositoryPluginClass bobbuilderbuildpluginScanLocalRepositoryPluginClass;
typedef struct _bobbuilderbuildpluginScanLocalRepositoryPluginPrivate bobbuilderbuildpluginScanLocalRepositoryPluginPrivate;

struct _bobbuilderbuildpluginCopyLibraryFromRepositoryPlugin {
	bobbuilderbuildpluginAbstractBobBuildPlugin parent_instance;
	bobbuilderbuildpluginCopyLibraryFromRepositoryPluginPrivate * priv;
};

struct _bobbuilderbuildpluginCopyLibraryFromRepositoryPluginClass {
	bobbuilderbuildpluginAbstractBobBuildPluginClass parent_class;
};

struct _bobbuilderbuildpluginInstallInLocalRepositoryPlugin {
	bobbuilderbuildpluginAbstractBobBuildPlugin parent_instance;
	bobbuilderbuildpluginInstallInLocalRepositoryPluginPrivate * priv;
};

struct _bobbuilderbuildpluginInstallInLocalRepositoryPluginClass {
	bobbuilderbuildpluginAbstractBobBuildPluginClass parent_class;
};

struct _bobbuilderbuildpluginRepositoryDependencyScanner {
	GTypeInstance parent_instance;
	volatile int ref_count;
	bobbuilderbuildpluginRepositoryDependencyScannerPrivate * priv;
};

struct _bobbuilderbuildpluginRepositoryDependencyScannerClass {
	GTypeClass parent_class;
	void (*finalize) (bobbuilderbuildpluginRepositoryDependencyScanner *self);
};

typedef enum  {
	BOB_BUILDER_BUILD_PLUGIN_REPOSITORY_SCANNER_ERROR_INITIALIZATION_ERROR
} bobbuilderbuildpluginRepositoryScannerError;
#define BOB_BUILDER_BUILD_PLUGIN_REPOSITORY_SCANNER_ERROR bob_builder_build_plugin_repository_scanner_error_quark ()
typedef void (*bobbuilderbuildpluginRepositoryDependencyScannerAdditionalDependencyFoundDelegate) (bobbuilderrecipeprojectBobBuildProjectDependency* dependency, void* user_data);
struct _bobbuilderbuildpluginRepositoryDirectoriesIface {
	GTypeInterface parent_iface;
};

struct _bobbuilderbuildpluginRepositoryProjectDirectoryStructure {
	GTypeInstance parent_instance;
	volatile int ref_count;
	bobbuilderbuildpluginRepositoryProjectDirectoryStructurePrivate * priv;
};

struct _bobbuilderbuildpluginRepositoryProjectDirectoryStructureClass {
	GTypeClass parent_class;
	void (*finalize) (bobbuilderbuildpluginRepositoryProjectDirectoryStructure *self);
};

struct _bobbuilderbuildpluginScanLocalRepositoryPlugin {
	bobbuilderbuildpluginAbstractBobBuildPlugin parent_instance;
	bobbuilderbuildpluginScanLocalRepositoryPluginPrivate * priv;
};

struct _bobbuilderbuildpluginScanLocalRepositoryPluginClass {
	bobbuilderbuildpluginAbstractBobBuildPluginClass parent_class;
};


GType bob_builder_build_plugin_copy_library_from_repository_plugin_get_type (void) G_GNUC_CONST;
bobbuilderbuildpluginCopyLibraryFromRepositoryPlugin* bob_builder_build_plugin_copy_library_from_repository_plugin_new (void);
bobbuilderbuildpluginCopyLibraryFromRepositoryPlugin* bob_builder_build_plugin_copy_library_from_repository_plugin_construct (GType object_type);
GType bob_builder_build_plugin_install_in_local_repository_plugin_get_type (void) G_GNUC_CONST;
bobbuilderbuildpluginInstallInLocalRepositoryPlugin* bob_builder_build_plugin_install_in_local_repository_plugin_new (void);
bobbuilderbuildpluginInstallInLocalRepositoryPlugin* bob_builder_build_plugin_install_in_local_repository_plugin_construct (GType object_type);
gpointer bob_builder_build_plugin_repository_dependency_scanner_ref (gpointer instance);
void bob_builder_build_plugin_repository_dependency_scanner_unref (gpointer instance);
GParamSpec* bob_builder_build_plugin_param_spec_repository_dependency_scanner (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags);
void bob_builder_build_plugin_value_set_repository_dependency_scanner (GValue* value, gpointer v_object);
void bob_builder_build_plugin_value_take_repository_dependency_scanner (GValue* value, gpointer v_object);
gpointer bob_builder_build_plugin_value_get_repository_dependency_scanner (const GValue* value);
GType bob_builder_build_plugin_repository_dependency_scanner_get_type (void) G_GNUC_CONST;
GQuark bob_builder_build_plugin_repository_scanner_error_quark (void);
void bob_builder_build_plugin_repository_dependency_scanner_initialize (bobbuilderbuildpluginRepositoryDependencyScanner* self, GError** error);
void bob_builder_build_plugin_repository_dependency_scanner_scanDependenciesInRepository (bobbuilderbuildpluginRepositoryDependencyScanner* self, bobbuilderrecipeprojectBobBuildProjectRecipe* projectRecipe, bobbuilderbuildpluginRepositoryDependencyScannerAdditionalDependencyFoundDelegate additionalDependencyDelegate, void* additionalDependencyDelegate_target);
bobbuilderbuildpluginRepositoryDependencyScanner* bob_builder_build_plugin_repository_dependency_scanner_new (void);
bobbuilderbuildpluginRepositoryDependencyScanner* bob_builder_build_plugin_repository_dependency_scanner_construct (GType object_type);
GType bob_builder_build_plugin_repository_directories_get_type (void) G_GNUC_CONST;
#define BOB_BUILDER_BUILD_PLUGIN_REPOSITORY_DIRECTORIES_DIRECTORY_REPOSITORY_NAME ".bob"
gpointer bob_builder_build_plugin_repository_project_directory_structure_ref (gpointer instance);
void bob_builder_build_plugin_repository_project_directory_structure_unref (gpointer instance);
GParamSpec* bob_builder_build_plugin_param_spec_repository_project_directory_structure (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags);
void bob_builder_build_plugin_value_set_repository_project_directory_structure (GValue* value, gpointer v_object);
void bob_builder_build_plugin_value_take_repository_project_directory_structure (GValue* value, gpointer v_object);
gpointer bob_builder_build_plugin_value_get_repository_project_directory_structure (const GValue* value);
GType bob_builder_build_plugin_repository_project_directory_structure_get_type (void) G_GNUC_CONST;
void bob_builder_build_plugin_repository_project_directory_structure_readFrom (bobbuilderfilesystemDirectoryObject* directory, bobbuilderfilesystemDirectoryBuilderDirectoryBuilderDelegate repositoryBuilderDelegate, void* repositoryBuilderDelegate_target);
void bob_builder_build_plugin_repository_project_directory_structure_read (bobbuilderfilesystemDirectoryBuilderDirectoryBuilderDelegate repositoryBuilderDelegate, void* repositoryBuilderDelegate_target);
void bob_builder_build_plugin_repository_project_directory_structure_write (bobbuilderfilesystemDirectoryBuilderDirectoryBuilderDelegate repositoryBuilderDelegate, void* repositoryBuilderDelegate_target);
bobbuilderbuildpluginRepositoryProjectDirectoryStructure* bob_builder_build_plugin_repository_project_directory_structure_new (void);
bobbuilderbuildpluginRepositoryProjectDirectoryStructure* bob_builder_build_plugin_repository_project_directory_structure_construct (GType object_type);
GType bob_builder_build_plugin_scan_local_repository_plugin_get_type (void) G_GNUC_CONST;
bobbuilderbuildpluginScanLocalRepositoryPlugin* bob_builder_build_plugin_scan_local_repository_plugin_new (void);
bobbuilderbuildpluginScanLocalRepositoryPlugin* bob_builder_build_plugin_scan_local_repository_plugin_construct (GType object_type);
void initializePlugin (bobbuilderbuildpluginBobBuildPluginLoader* pluginsLoader);
gchar** getDependencies (int* result_length1);


G_END_DECLS

#endif
