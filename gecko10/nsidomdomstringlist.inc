type

  nsIDOMDOMStringList = interface(nsISupports)
  ['{0bbae65c-1dde-11d9-8c46-000a95dc234c}']
    procedure item(index: idlulong; result_: DOMString); safecall;
    function Getlength(): idlulong; safecall;
    property length : idlulong read Getlength;
    function contains(str: DOMString) : longbool; safecall;

  end;

