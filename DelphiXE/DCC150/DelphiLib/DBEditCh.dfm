inherited DBChartEditor: TDBChartEditor
  Left = 392
  Top = 195
  PixelsPerInch = 96
  TextHeight = 13
  inherited Pan: TPanel
    TabOrder = 1
    inherited PanelApply: TPanel
      inherited BApply: TButton
        OnClick = BApplyClick
      end
    end
  end
  object GroupFields: TScrollBox
    Left = 0
    Top = 32
    Width = 377
    Height = 165
    HelpContext = 1870
    HorzScrollBar.Range = 268
    HorzScrollBar.Visible = False
    VertScrollBar.Range = 25
    Align = alClient
    AutoScroll = False
    BorderStyle = bsNone
    TabOrder = 0
    object LLabels: TLabel
      Left = 52
      Top = 8
      Width = 34
      Height = 13
      Alignment = taRightJustify
      Caption = '&Labels:'
      FocusControl = CBLabelsField
    end
    object CBLabelsField: TComboFlat
      Left = 95
      Top = 4
      Width = 173
      HelpContext = 696
      Style = csDropDown
      TabOrder = 0
      OnChange = CBLabelsFieldChange
    end
  end
end
