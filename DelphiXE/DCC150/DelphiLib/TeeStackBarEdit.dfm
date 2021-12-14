object StackBarSeriesEditor: TStackBarSeriesEditor
  Left = 360
  Top = 282
  ClientHeight = 146
  ClientWidth = 314
  Color = clBtnFace
  ParentFont = True
  OldCreateOrder = True
  OnCreate = FormCreate
  OnShow = FormShow
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel
    Left = 165
    Top = 66
    Width = 62
    Height = 13
    Caption = '&Stack Group:'
    FocusControl = EGroup
  end
  object CBYOrigin: TCheckBox
    Left = 163
    Top = 14
    Width = 142
    Height = 17
    HelpContext = 665
    Caption = 'Use &Origin:'
    TabOrder = 0
    OnClick = CBYOriginClick
  end
  object EYOrigin: TEdit
    Left = 164
    Top = 36
    Width = 63
    Height = 21
    HelpContext = 702
    TabOrder = 1
    Text = '0'
    OnChange = EYOriginChange
  end
  object RGMultiBar: TRadioGroup
    Left = 4
    Top = 8
    Width = 149
    Height = 129
    HelpContext = 301
    Caption = '&Multiple Bar:'
    Items.Strings = (
      'None'
      'Side'
      'Stacked'
      'Stacked 100%'
      'Side All'
      'Self Stack')
    TabOrder = 2
    OnClick = RGMultiBarClick
  end
  object EGroup: TEdit
    Left = 164
    Top = 85
    Width = 31
    Height = 21
    HelpContext = 1371
    TabOrder = 3
    Text = '0'
    OnChange = EGroupChange
  end
  object UDGroup: TUpDown
    Left = 195
    Top = 85
    Width = 15
    Height = 21
    HelpContext = 1371
    Associate = EGroup
    TabOrder = 4
  end
end
