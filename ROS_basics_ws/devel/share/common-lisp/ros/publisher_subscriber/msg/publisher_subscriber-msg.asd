
(cl:in-package :asdf)

(defsystem "publisher_subscriber-msg"
  :depends-on (:roslisp-msg-protocol :roslisp-utils )
  :components ((:file "_package")
    (:file "MsgTutorial" :depends-on ("_package_MsgTutorial"))
    (:file "_package_MsgTutorial" :depends-on ("_package"))
  ))