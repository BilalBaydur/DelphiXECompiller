inherited DBChartCrossTabEditor: TDBChartCrossTabEditor
  Left = 370
  Top = 374
  Height = 279
  ActiveControl = CBAgg
  OnDestroy = FormDestroy
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel [0]
    Left = 130
    Top = 79
    Width = 46
    Height = 13
    Alignment = taRightJustify
    Caption = '&Group by:'
  end
  object Label2: TLabel [1]
    Left = 41
    Top = 45
    Width = 24
    Height = 13
    Alignment = taRightJustify
    Caption = '&Calc:'
    FocusControl = CBAgg
  end
  object Label3: TLabel [2]
    Left = 167
    Top = 46
    Width = 9
    Height = 13
    Caption = 'of'
  end
  object Label4: TLabel [3]
    Left = 142
    Top = 111
    Width = 34
    Height = 13
    Alignment = taRightJustify
    Caption = '&Labels:'
  end
  inherited Pan: TPanel
    TabOrder = 3
    inherited PanelApply: TPanel
      inherited BApply: TButton
        OnClick = BApplyClick
      end
    end
  end
  object CBAgg: TComboFlat
    Left = 72
    Top = 42
    Width = 89
    HelpContext = 1820
    TabOrder = 0
    OnChange = CBAggChange
    Items.Strings = (
      'Sum'
      'Count')
  end
  object CBValue: TComboFlat
    Left = 184
    Top = 42
    Width = 145
    HelpContext = 1821
    Style = csDropDown
    TabOrder = 1
    OnChange = CBAggChange
  end
  object CBGroup: TComboFlat
    Left = 184
    Top = 75
    Width = 145
    HelpContext = 1822
    Style = csDropDown
    TabOrder = 2
    OnChange = CBAggChange
  end
  object CBLabels: TComboFlat
    Left = 184
    Top = 107
    Width = 145
    HelpContext = 1823
    Style = csDropDown
    TabOrder = 4
    OnChange = CBAggChange
  end
  object CBActive: TCheckBox
    Left = 72
    Top = 134
    Width = 137
    Height = 17
    HelpContext = 1824
    Caption = '&Active'
    TabOrder = 5
    OnClick = CBActiveClick
  end
  object CBCase: TCheckBox
    Left = 72
    Top = 158
    Width = 249
    Height = 17
    HelpContext = 1825
    Caption = 'Ca&se sensitive'
    Checked = True
    State = cbChecked
    TabOrder = 6
    OnClick = CBCaseClick
  end
  object CBHide: TCheckBox
    Left = 72
    Top = 182
    Width = 257
    Height = 17
    Caption = 'Hide Series at editor'
    TabOrder = 7
    OnClick = CBHideClick
  end
  object PanelButtons: TPanel
    Left = 0
    Top = 211
    Width = 377
    Height = 41
    Align = alBottom
    TabOrder = 8
    Visible = False
    object Panel2: TPanel
      Left = 285
      Top = 1
      Width = 91
      Height = 39
      Align = alRight
      BevelOuter = bvNone
      TabOrder = 0
      object BOK: TButton
        Left = 6
        Top = 8
        Width = 75
        Height = 25
        Caption = 'OK'
        Default = True
        ModalResult = 1
        TabOrder = 0
      end
    end
  end
end
