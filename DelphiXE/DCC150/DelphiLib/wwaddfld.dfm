object wwAddFieldForm: TwwAddFieldForm
  Left = 290
  Top = 165
  Width = 209
  Height = 247
  Caption = 'wwAddFieldForm'
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object AddFieldsButton: TButton
    Left = 12
    Top = 188
    Width = 81
    Height = 25
    Caption = '&Add Fields'
    TabOrder = 0
    OnClick = AddFieldsButtonClick
  end
  object DstList: TListBox
    Left = 6
    Top = 2
    Width = 187
    Height = 181
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clBlack
    Font.Height = -12
    Font.Name = 'MS Sans Serif'
    Font.Style = [fsBold]
    ItemHeight = 13
    MultiSelect = True
    ParentFont = False
    TabOrder = 1
    IsControl = True
  end
  object RemoveFieldsButton: TButton
    Left = 104
    Top = 188
    Width = 87
    Height = 25
    Caption = '&Remove Fields'
    TabOrder = 2
    OnClick = RemoveFieldsButtonClick
  end
end
