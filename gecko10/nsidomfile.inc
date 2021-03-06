type

  nsIDOMBlob = interface(nsISupports)
  ['{d5237f31-443a-460b-9e42-449a135346f0}']
    function Getsize(): idlulong; safecall;
    property size : idlulong read Getsize;
    procedure Gettype( result_: DOMString); safecall;
    function GetinternalStream(): nsIInputStream; safecall;
    property internalStream : nsIInputStream read GetinternalStream;
    procedure getInternalUrl(principal: nsIPrincipal; result_: DOMString); safecall;
    function mozSlice(start: idllong; anend: idllong; contentType: DOMString) : nsIDOMBlob; safecall;

  end;


  nsIDOMFile = interface(nsIDOMBlob)
  ['{b096ef67-7b77-47f8-8e70-5d8ee36416bf}']
    procedure Getname( result_: DOMString); safecall;
    procedure GetmozFullPath( result_: DOMString); safecall;
    procedure GetmozFullPathInternal( result_: DOMString); safecall;

  end;


  nsIDOMMozBlobBuilder = interface(nsISupports)
  ['{006d2cde-ec18-41d4-acc3-43682dd418e2}']
    function getBlob(contentType: DOMString) : nsIDOMBlob; safecall;
    function getFile(name: DOMString; contentType: DOMString) : nsIDOMFile; safecall;
    procedure append(data: jsval); safecall;

  end;

