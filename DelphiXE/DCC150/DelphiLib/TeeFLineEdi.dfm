inherited FastLineSeriesEditor: TFastLineSeriesEditor
  Left = 438
  Width = 314
  Height = 271
  PixelsPerInch = 96
  TextHeight = 13
  object Label2: TLabel [2]
    Left = 8
    Top = 160
    Width = 54
    Height = 13
    Caption = '&Treat Nulls:'
    FocusControl = CBNulls
  end
  inherited BOk: TButton
    Visible = False
  end
  inherited BCancel: TButton
    Visible = False
  end
  inherited CBEndStyle: TComboFlat
    TabOrder = 11
  end
  inherited UDSpace: TUpDown
    TabOrder = 12
  end
  object CBDrawAll: TCheckBox
    Left = 9
    Top = 209
    Width = 131
    Height = 17
    HelpContext = 1742
    Caption = 'Draw &All'
    TabOrder = 7
    OnClick = CBDrawAllClick
  end
  object GBStair: TGroupBox
    Left = 8
    Top = 104
    Width = 233
    Height = 41
    HelpContext = 438
    Caption = 'Line Mode:'
    TabOrder = 9
    object CBStairs: TCheckBox
      Left = 8
      Top = 16
      Width = 80
      Height = 17
      HelpContext = 1830
      Caption = '&Stairs'
      TabOrder = 0
      OnClick = CBStairsClick
    end
    object CBInvStairs: TCheckBox
      Left = 112
      Top = 16
      Width = 80
      Height = 17
      HelpContext = 1831
      Caption = '&Inverted'
      TabOrder = 1
      OnClick = CBInvStairsClick
    end
  end
  object CBNulls: TComboFlat
    Left = 8
    Top = 176
    Width = 145
    ItemIndex = 2
    TabOrder = 10
    Text = 'Ignore'
    OnChange = CBNullsChange
    Items.Strings = (
      'Dont Paint'
      'Skip'
      'Ignore')
  end
end
