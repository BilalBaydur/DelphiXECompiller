inherited DBChartSumEditor: TDBChartSumEditor
  ActiveControl = CBAgg
  Position = poScreenCenter
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel [0]
    Left = 23
    Top = 85
    Width = 46
    Height = 13
    Alignment = taRightJustify
    Caption = '&Group by:'
    FocusControl = CBTimeStep
  end
  object Label2: TLabel [1]
    Left = 46
    Top = 54
    Width = 24
    Height = 13
    Alignment = taRightJustify
    Caption = '&Calc:'
    FocusControl = CBAgg
  end
  object Label3: TLabel [2]
    Left = 167
    Top = 53
    Width = 9
    Height = 13
    Caption = 'of'
  end
  object Label4: TLabel [3]
    Left = 32
    Top = 120
    Width = 36
    Height = 13
    Alignment = taRightJustify
    Caption = '&Sort by:'
  end
  inherited Pan: TPanel
    TabOrder = 4
    inherited PanelApply: TPanel
      inherited BApply: TButton
        OnClick = BApplyClick
      end
    end
  end
  object CBAgg: TComboFlat
    Left = 72
    Top = 48
    Width = 89
    HelpContext = 1871
    TabOrder = 0
    OnChange = CBAggChange
    Items.Strings = (
      'Sum'
      'Count'
      'High'
      'Low'
      'Avg')
  end
  object CBValue: TComboFlat
    Left = 209
    Top = 48
    Width = 145
    HelpContext = 1871
    Style = csDropDown
    TabOrder = 1
    OnChange = CBAggChange
  end
  object CBGroup: TComboFlat
    Left = 209
    Top = 81
    Width = 145
    HelpContext = 1871
    Style = csDropDown
    TabOrder = 2
    OnChange = CBGroupChange
  end
  object CBTimeStep: TComboFlat
    Left = 72
    Top = 81
    Width = 89
    HelpContext = 1871
    TabOrder = 3
    OnChange = CBAggChange
    Items.Strings = (
      'Hour'
      'Day'
      'Week'
      'WeekDay'
      'Month'
      'Quarter'
      'Year')
  end
  object CBSort: TComboFlat
    Left = 72
    Top = 117
    Width = 119
    HelpContext = 1871
    Enabled = False
    TabOrder = 5
    OnChange = CBSortChange
    Items.Strings = (
      '(none)'
      'Calculation'
      'Group')
  end
  object CBSortType: TComboFlat
    Left = 209
    Top = 117
    Width = 145
    HelpContext = 1871
    Enabled = False
    TabOrder = 6
    OnChange = CBSortTypeChange
    Items.Strings = (
      'Ascending'
      'Descending')
  end
  object PanelButtons: TPanel
    Left = 0
    Top = 156
    Width = 377
    Height = 41
    Align = alBottom
    TabOrder = 7
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
        Left = 8
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
