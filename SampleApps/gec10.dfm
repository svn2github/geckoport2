object Form1: TForm1
  Left = 0
  Top = 0
  Width = 674
  Height = 461
  Caption = 'Form1'
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  OnShow = FormShow
  PixelsPerInch = 96
  TextHeight = 13
  object lblProg: TLabel
    Left = 296
    Top = 400
    Width = 32
    Height = 13
    Caption = 'lblProg'
  end
  object lblProgMax: TLabel
    Left = 352
    Top = 400
    Width = 52
    Height = 13
    Caption = 'lblProgMax'
  end
  object GeckoBrowser1: TGeckoBrowser
    Left = 0
    Top = 16
    Width = 665
    Height = 257
    TabOrder = 0
    TabStop = False
    OnStatusChange = GeckoBrowser1StatusChange
    OnProgressChange = GeckoBrowser1ProgressChange
    OnLocationChange = GeckoBrowser1LocationChange
  end
  object ListBox1: TListBox
    Left = 0
    Top = 280
    Width = 665
    Height = 113
    ItemHeight = 13
    TabOrder = 1
  end
end
