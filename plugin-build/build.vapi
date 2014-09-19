/* build.vapi generated by valac 0.25.4, do not modify. */

namespace com {
	namespace futureprocessing {
		namespace bob {
			namespace ansi {
				[CCode (cheader_filename = "Logger.h")]
				public class AnsiColorGenerator {
					public AnsiColorGenerator ();
					public string getBlue ();
					public string getDefault ();
					public string getGreen ();
					public string getRed ();
				}
				[CCode (cheader_filename = "Logger.h")]
				public class AnsiPrinter {
					public AnsiPrinter ();
					public com.futureprocessing.bob.ansi.AnsiPrinterSession startSession ();
				}
				[CCode (cheader_filename = "Logger.h")]
				public class AnsiPrinterSession {
					public AnsiPrinterSession ();
					public void commit (GLib.FileStream stream);
					public void flush (GLib.FileStream stream);
					public void reset (GLib.FileStream stream);
					public void setBold (bool bold);
					public void setColorBlue ();
					public void setColorDefault ();
					public void setColorGreen ();
					public void setColorRed ();
				}
			}
			namespace build {
				namespace plugin {
					[CCode (cheader_filename = "Logger.h")]
					public class BuildApplicationPlugin : GLib.Object, com.futureprocessing.bob.build.plugin.BobBuildPlugin {
						public BuildApplicationPlugin ();
					}
					[CCode (cheader_filename = "Logger.h")]
					public class BuildPluginLoader<T> {
						public T instantiatePlugin ();
						public static com.futureprocessing.bob.build.plugin.BuildPluginLoader<com.futureprocessing.bob.build.plugin.BobBuildPlugin> loadPlugin (string name) throws com.futureprocessing.bob.build.plugin.BuildPluginError;
						public string path { get; private set; }
					}
					[CCode (cheader_filename = "Logger.h")]
					public interface BobBuildPlugin : GLib.Object {
						public abstract string[] getRunAfter ();
						public abstract void initialize (com.futureprocessing.bob.recipe.plugin.BobBuildPluginConfiguration pluginConfiguration);
						public abstract void run (com.futureprocessing.bob.build.BobBuildContext buildContext);
					}
					[CCode (cheader_filename = "Logger.h")]
					public errordomain BuildPluginError {
						MODULE_NOT_FOUND_ERROR,
						MODULE_TYPE_FUNCTION_MISSING_ERROR
					}
				}
				[CCode (cheader_filename = "Logger.h")]
				public class BobBuildContext : GLib.Object {
					public BobBuildContext ();
					public void addPlugin (string buildPlugin) throws com.futureprocessing.bob.build.plugin.BuildPluginError;
					public void proceed ();
					public BobBuildContext.withRecipe (com.futureprocessing.bob.recipe.BobBuildRecipe buildRecipe);
					public bool buildLibrary { get; set; }
					public bool buildMain { get; set; }
				}
			}
			namespace filesystem {
				[CCode (cheader_filename = "Logger.h")]
				public class DirectoryObject : com.futureprocessing.bob.filesystem.FileSystemObject {
					public DirectoryObject (GLib.File directory);
					public DirectoryObject.fromGivenLocation (string directoryLocation);
				}
				[CCode (cheader_filename = "Logger.h")]
				public class FileObject : com.futureprocessing.bob.filesystem.FileSystemObject {
					public FileObject (GLib.File file);
				}
				[CCode (cheader_filename = "Logger.h")]
				public abstract class FileSystemFilteringVisitor : com.futureprocessing.bob.filesystem.FileSystemVisitor {
					public FileSystemFilteringVisitor (com.futureprocessing.bob.filesystem.FileFilter filter);
					protected abstract void visitFileFiltered (GLib.File file);
				}
				[CCode (cheader_filename = "Logger.h")]
				public class Runtime {
					public Runtime ();
					public static string getRuntimeDirectory ();
					public static string resolveRuntimeRelativePath (string relativePath);
				}
				[CCode (cheader_filename = "Logger.h")]
				public interface FileFilter : GLib.Object {
					public abstract bool fileMatchesCriteria (GLib.File file);
				}
				[CCode (cheader_filename = "Logger.h")]
				public interface FileSystemObject {
					public abstract void accept (com.futureprocessing.bob.filesystem.FileSystemVisitor visitor);
				}
				[CCode (cheader_filename = "Logger.h")]
				public interface FileSystemVisitor {
					public abstract void visitFile (GLib.File file);
				}
			}
			namespace log {
				[CCode (cheader_filename = "Logger.h")]
				public class Logger {
					public static com.futureprocessing.bob.log.Logger getLogger (string loggerId);
					public void logError (string message, ...);
					public void logInfo (string message, ...);
					public void logSuccess (string message, ...);
				}
			}
			namespace recipe {
				namespace plugin {
					[CCode (cheader_filename = "Logger.h")]
					public class BobBuildPluginConfiguration : GLib.Object {
						public BobBuildPluginConfiguration (string name);
						public string name { get; set construct; }
					}
				}
				namespace project {
					[CCode (cheader_filename = "Logger.h")]
					public class BobBuildProjectConfiguration {
						public BobBuildProjectConfiguration ();
						public string name { get; set; }
						public string shortName { get; set; }
						public string version { get; set; }
					}
				}
				[CCode (cheader_filename = "Logger.h")]
				public class BobBuildRecipe : GLib.Object {
					public BobBuildRecipe ();
					public GLib.List<com.futureprocessing.bob.recipe.plugin.BobBuildPluginConfiguration> plugins { get; set; }
					public com.futureprocessing.bob.recipe.project.BobBuildProjectConfiguration project { get; set; }
				}
				[CCode (cheader_filename = "Logger.h")]
				public class BobBuildRecipeBuilder : GLib.Object {
					public BobBuildRecipeBuilder ();
					public com.futureprocessing.bob.recipe.BobBuildRecipe build ();
					public com.futureprocessing.bob.recipe.BobBuildRecipeBuilder plugin (com.futureprocessing.bob.recipe.plugin.BobBuildPluginConfiguration pluginConfiguration);
					public com.futureprocessing.bob.recipe.BobBuildRecipeBuilder project (string name, string shortName, string version);
				}
				[CCode (cheader_filename = "Logger.h")]
				public class BobBuildRecipeLoader {
					public static com.futureprocessing.bob.recipe.BobBuildRecipe loadFromJSON () throws GLib.Error;
					public com.futureprocessing.bob.recipe.BobBuildRecipe? loadFromJSONFile (string jsonFileName) throws GLib.Error;
				}
				[CCode (cheader_filename = "Logger.h")]
				public class BobBuildRecipeParser : GLib.Object {
					public static com.futureprocessing.bob.recipe.BobBuildRecipe parseFromJSONFile (GLib.FileInfo jsonFile) throws GLib.Error;
					public com.futureprocessing.bob.recipe.BobBuildRecipe parseFromJSONObject (Json.Object jsonObject);
				}
			}
		}
	}
}
[CCode (cheader_filename = "src/library/vala/com/futureprocessing/bob/plugin/plugin.h")]
public static GLib.Type getPluginType ();
