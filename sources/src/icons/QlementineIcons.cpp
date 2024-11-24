// SPDX-FileCopyrightText: Olivier Cléro <oclero@hotmail.com>
// SPDX-License-Identifier: MIT

#include <oclero/qlementine/icons/QlementineIcons.hpp>

#include <mutex>
#include <unordered_map>

#include <qglobal.h>
#include <QIcon>

// This must be done outside of any namespace.
void qlementineIconThemeInitialization() {
  // Loads the QRC content.
  // ---QRC - This part is generated by scripting. Don't modify.
  Q_INIT_RESOURCE(qlementine_icons_12_action);
  Q_INIT_RESOURCE(qlementine_icons_12_misc);
  Q_INIT_RESOURCE(qlementine_icons_12_navigation);
  Q_INIT_RESOURCE(qlementine_icons_16_action);
  Q_INIT_RESOURCE(qlementine_icons_16_audio);
  Q_INIT_RESOURCE(qlementine_icons_16_brand);
  Q_INIT_RESOURCE(qlementine_icons_16_document);
  Q_INIT_RESOURCE(qlementine_icons_16_file);
  Q_INIT_RESOURCE(qlementine_icons_16_food);
  Q_INIT_RESOURCE(qlementine_icons_16_hardware);
  Q_INIT_RESOURCE(qlementine_icons_16_instruments);
  Q_INIT_RESOURCE(qlementine_icons_16_media);
  Q_INIT_RESOURCE(qlementine_icons_16_misc);
  Q_INIT_RESOURCE(qlementine_icons_16_navigation);
  Q_INIT_RESOURCE(qlementine_icons_16_page);
  Q_INIT_RESOURCE(qlementine_icons_16_shape);
  Q_INIT_RESOURCE(qlementine_icons_16_shopping);
  Q_INIT_RESOURCE(qlementine_icons_16_software);
  Q_INIT_RESOURCE(qlementine_icons_16_text);
  Q_INIT_RESOURCE(qlementine_icons_32_file);
  Q_INIT_RESOURCE(qlementine_icons_32_misc);
  Q_INIT_RESOURCE(qlementine_icons_32_shape);
  // ---QRC

  // Registers the icon theme.
  QIcon::setFallbackSearchPaths(QIcon::fallbackSearchPaths() << ":/qlementine/icons");
}

namespace oclero::qlementine::icons {
std::once_flag qlementineOnceFlag;

std::unordered_map<QString, QString> freeDesktopMapping{
  // clang-format off
  // ---MAP - This part is generated by scripting. Don't modify.
  { "accessories-calculator", "software/calculator" },
  { "accessories-character-map", "software/character-map" },
  { "accessories-dictionary", "software/dictionary" },
  { "accessories-text-editor", "software/text-editor" },
  { "address-book-new", "action/address-book-add" },
  { "application-exit", "action/clear" },
  { "application-x-executable", "file/executable" },
  { "applications-games", "hardware/gamepad" },
  { "applications-graphics", "misc/paint-brush-thin" },
  { "applications-internet", "misc/globe" },
  { "applications-multimedia", "file/media" },
  { "applications-utilities", "misc/tool" },
  { "audio-card", "hardware/audio-interface" },
  { "audio-input-microphone", "hardware/microphone-old" },
  { "audio-volume-high", "audio/speaker-2" },
  { "audio-volume-low", "audio/speaker-0" },
  { "audio-volume-medium", "audio/speaker-1" },
  { "audio-volume-muted", "audio/speaker-mute" },
  { "audio-x-generic", "audio/speaker-2" },
  { "battery-caution", "hardware/battery-20" },
  { "battery-low", "hardware/backward-40" },
  { "battery", "hardware/battery-100" },
  { "camera-photo", "hardware/photo-camera" },
  { "camera-video", "hardware/camera" },
  { "camera-web", "hardware/webcam" },
  { "computer", "hardware/computer" },
  { "contact-new", "action/address-book-add" },
  { "dialog-error", "misc/spam" },
  { "dialog-information", "misc/info" },
  { "dialog-password", "misc/password" },
  { "dialog-question", "misc/question" },
  { "dialog-warning", "misc/warning" },
  { "document-new", "document/new" },
  { "document-open-recent", "document/open-recent" },
  { "document-open", "document/open" },
  { "document-page-setup", "document/page-setup" },
  { "document-print-preview", "action/print-preview" },
  { "document-print", "action/print" },
  { "document-properties", "document/properties" },
  { "document-revert", "action/restart" },
  { "document-save-as", "document/save-as" },
  { "document-save", "document/save" },
  { "document-send", "action/send" },
  { "drive-harddisk", "hardware/hardware/hdd" },
  { "drive-optical", "hardware/disk" },
  { "drive-removable-media", "hardware/drive" },
  { "edit-clear", "action/clear" },
  { "edit-copy", "action/copy" },
  { "edit-cut", "action/cut" },
  { "edit-delete", "action/erase" },
  { "edit-find-replace", "action/replace" },
  { "edit-find", "navigation/search" },
  { "edit-paste", "action/paste" },
  { "edit-redo", "action/redo" },
  { "edit-select-all", "action/select-all" },
  { "edit-undo", "action/undo" },
  { "flag-aa", "navigation/flag" },
  { "folder-new", "action/add-folder" },
  { "folder-open", "action/folder-open" },
  { "folder-remote", "misc/cloud" },
  { "folder", "file/folder" },
  { "font-x-generic", "file/font" },
  { "format-indent-less", "text/ident-less" },
  { "format-indent-more", "text/ident-more" },
  { "format-justify-center", "text/justify-center" },
  { "format-justify-fill", "text/justify-fill" },
  { "format-justify-left", "text/justify-left" },
  { "format-justify-right", "text/justify-right" },
  { "format-text-bold", "text/format-bold" },
  { "format-text-direction-ltr", "navigation/arrow-right" },
  { "format-text-direction-rtl", "navigation/arrow-left" },
  { "format-text-italic", "text/format-italic" },
  { "format-text-strikethrough", "text/format-strikethrough" },
  { "format-text-underline", "text/format-underline" },
  { "go-bottom", "navigation/go-bottom" },
  { "go-down", "navigation/chevron-down" },
  { "go-first", "navigation/go-first" },
  { "go-home", "navigation/home" },
  { "go-jump", "navigation/jump" },
  { "go-last", "navigation/go-last" },
  { "go-next", "navigation/chevron-right" },
  { "go-previous", "navigation/chevron-left" },
  { "go-top", "navigation/go-top" },
  { "go-up", "navigation/chevron-up" },
  { "help-about", "misc/question" },
  { "help-browser", "misc/globe" },
  { "help-contents", "misc/book" },
  { "help-faq", "misc/faq" },
  { "image-x-generic", "file/picture" },
  { "input-gaming", "hardware/gamepad" },
  { "input-keyboard", "hardware/keyboard" },
  { "input-mouse", "hardware/mouse" },
  { "input-tablet", "hardware/tablet" },
  { "list-add", "action/plus" },
  { "list-remove", "action/minus" },
  { "mail-attachment", "misc/attachement" },
  { "mail-forward", "action/forward" },
  { "mail-reply-all", "action/reply-all" },
  { "mail-send-receive", "action/send-receive" },
  { "mail-send", "action/send" },
  { "media-eject", "media/eject" },
  { "media-flash", "hardware/usb-key" },
  { "media-floppy", "action/save" },
  { "media-optical", "hardware/disk" },
  { "media-playback-pause", "media/pause" },
  { "media-playback-start", "media/play" },
  { "media-playback-stop", "media/stop" },
  { "media-playlist-repeat", "media/loop" },
  { "media-playlist-shuffle", "media/shuffle" },
  { "media-record", "media/record" },
  { "media-seek-backward", "media/seek-backward" },
  { "media-seek-forward", "media/seek-forward" },
  { "media-skip-backward", "media/skip-backward" },
  { "media-skip-forward", "media/skip-forward" },
  { "media-tape", "hardware/tape" },
  { "modem", "hardware/modem" },
  { "network-server", "hardware/server" },
  { "network-wired", "hardware/ethernet" },
  { "network-wireless", "hardware/wireless-2" },
  { "network-workgroup", "hardware/network" },
  { "package-x-generic", "file/archive" },
  { "pda", "hardware/pda" },
  { "phone", "hardware/phone" },
  { "printer", "hardware/printer" },
  { "process-stop", "media/stop" },
  { "scanner", "hardware/scanner" },
  { "sync-error", "misc/cloud-crossed-out" },
  { "sync-synchronizing", "misc/cloud-up-down" },
  { "system-file-manager", "software/file-manager" },
  { "system-help", "misc/help" },
  { "system-lock-screen", "action/lock-screen" },
  { "system-log-out", "action/log-out" },
  { "system-reboot", "action/refresh" },
  { "system-run", "action/run" },
  { "system-search", "navigation/search" },
  { "system-shutdown", "action/on-off" },
  { "task-due", "misc/task-soon" },
  { "task-past-due", "misc/task-past" },
  { "text-html", "file/file-html" },
  { "text-x-generic", "file/file-text" },
  { "text-x-script", "file/file-script" },
  { "tools-check-spelling", "software/spell-check" },
  { "user-bookmarks", "navigation/bookmark" },
  { "user-desktop", "software/desktop" },
  { "user-home", "navigation/home" },
  { "user-trash-full", "action/trash-full" },
  { "user-trash", "action/trash" },
  { "utilities-system-monitor", "software/system-monitor" },
  { "utilities-terminal", "software/command-line" },
  { "video-display", "hardware/screen" },
  { "video-x-generic", "file/movie" },
  { "view-fullscreen", "action/fullscreen" },
  { "view-refresh", "action/refresh" },
  { "view-restore", "action/reset" },
  { "view-sort-ascending", "action/sort-asc" },
  { "view-sort-descending", "action/sort-desc" },
  { "x-office-address-book", "software/address-book" },
  { "x-office-calendar", "misc/calendar" },
  { "zoom-fit-best", "action/zoom-fit" },
  { "zoom-in", "action/zoom-in" },
  { "zoom-original", "action/zoom-original" },
  { "zoom-out", "action/zoom-out" },
  // ---MAP
  // clang-format on
};

void initializeIconTheme() {
  std::call_once(qlementineOnceFlag, qlementineIconThemeInitialization);
}

QString fromFreeDesktop(const QString& freeDesktopName) {
  const auto it = freeDesktopMapping.find(freeDesktopName);
  return it != freeDesktopMapping.end() ? QString(":/qlementine/icons/16/%1.svg").arg(it->second) : QString();
}
} // namespace oclero::qlementine::icons
