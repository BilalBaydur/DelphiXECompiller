inherited CustomFunctionEditor: TCustomFunctionEditor
  Left = 258
  Top = 200
  ClientHeight = 114
  ClientWidth = 278
  OnCloseQuery = nil
  OnShow = nil
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel
    Left = 60
    Top = 7
    Width = 35
    Height = 13
    Alignment = taRightJustify
    Caption = '&Start X:'
  end
  object Label2: TLabel
    Left = 70
    Top = 34
    Width = 25
    Height = 13
    Alignment = taRightJustify
    Caption = 'S&tep:'
  end
  object Label3: TLabel
    Left = 36
    Top = 61
    Width = 59
    Height = 13
    Alignment = taRightJustify
    Caption = '&Num. points:'
  end
  object EStart: TEdit
    Left = 106
    Top = 3
    Width = 121
    Height = 21
    HelpContext = 1818
    TabOrder = 0
    Text = '0'
    OnChange = EStartChange
  end
  object EStep: TEdit
    Left = 106
    Top = 30
    Width = 121
    Height = 21
    HelpContext = 382
    TabOrder = 1
    Text = '1'
    OnChange = EStartChange
  end
  object ENum: TEdit
    Left = 106
    Top = 57
    Width = 71
    Height = 21
    HelpContext = 1819
    TabOrder = 2
    Text = '100'
    OnChange = EStartChange
  end
end
