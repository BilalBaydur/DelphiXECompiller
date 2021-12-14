object Form1: TForm1
  Left = 0
  Top = 0
  Caption = 'Select Fields'
  ClientHeight = 236
  ClientWidth = 276
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object DstList: TListBox
    Left = 6
    Top = 8
    Width = 177
    Height = 192
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clBlack
    Font.Height = -12
    Font.Name = 'MS Sans Serif'
    Font.Style = [fsBold]
    ItemHeight = 13
    MultiSelect = True
    ParentFont = False
    TabOrder = 0
    IsControl = True
  end
  object InsertNewLineButton: TBitBtn
    Left = 7
    Top = 206
    Width = 21
    Height = 25
    Hint = 'Insert Line Break'
    ParentShowHint = False
    ShowHint = True
    TabOrder = 1
    Glyph.Data = {
      F6000000424DF600000000000000760000002800000010000000100000000100
      0400000000008000000000000000000000001000000010000000000000000000
      8000008000000080800080000000800080008080000080808000C0C0C0000000
      FF0000FF000000FFFF00FF000000FF00FF00FFFF0000FFFFFF00FFFFFFFFFFFF
      FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF0FFFFFFFFFFFFFF000FFFFFFFFFFFF000
      00FFFFFFFFFF0000000FFFFFFFFFFF000FFFFFFFFFFFFF000FFFFFFFFFFFFF00
      0FFFFF00000000000FFFFF0000000000FFFFFF000000000FFFFFFFFFFFFFFFFF
      FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF}
  end
  object AddFieldsButton: TButton
    Left = 27
    Top = 206
    Width = 78
    Height = 25
    Caption = '&Add Fields'
    TabOrder = 2
    OnClick = AddFieldsButtonClick
  end
  object RemoveFieldsButton: TButton
    Left = 105
    Top = 206
    Width = 78
    Height = 25
    Caption = '&Remove Fields'
    TabOrder = 3
  end
end
