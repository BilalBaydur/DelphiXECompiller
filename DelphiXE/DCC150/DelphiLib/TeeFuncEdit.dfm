inherited TeeFuncEditor: TTeeFuncEditor
  Left = 388
  Top = 346
  Width = 399
  Height = 246
  OnDestroy = FormDestroy
  PixelsPerInch = 96
  TextHeight = 13
  inherited Pan: TPanel
    Width = 391
    inherited LLabel: TLabel
      Caption = '&Functions:'
    end
    object SpeedButton1: TSpeedButton [1]
      Left = 274
      Top = 4
      Width = 23
      Height = 22
      Caption = '...'
      Flat = True
      OnClick = SpeedButton1Click
    end
    inherited PanelApply: TPanel
      Left = 302
      inherited BApply: TButton
        OnClick = BApplyClick
      end
    end
  end
  object PageControl1: TPageControl
    Left = 0
    Top = 32
    Width = 391
    Height = 187
    ActivePage = TabSource
    Align = alClient
    HotTrack = True
    TabOrder = 1
    object TabSource: TTabSheet
      Caption = 'Source Series'
      object PanSingle: TPanel
        Left = 0
        Top = 0
        Width = 383
        Height = 159
        Align = alClient
        BevelOuter = bvNone
        TabOrder = 0
        object Label1: TLabel
          Left = 56
          Top = 26
          Width = 32
          Height = 13
          Alignment = taRightJustify
          Caption = '&Series:'
          FocusControl = CBSingle
        end
        object LValues: TLabel
          Left = 53
          Top = 57
          Width = 35
          Height = 13
          Alignment = taRightJustify
          Caption = '&Values:'
          FocusControl = CBValues
        end
        object CBSingle: TComboFlat
          Left = 92
          Top = 22
          Width = 145
          TabOrder = 0
          OnChange = CBSingleChange
        end
        object CBValues: TComboFlat
          Left = 92
          Top = 54
          Width = 145
          Enabled = False
          TabOrder = 1
          OnChange = CBValuesChange
        end
        object BNone: TButton
          Left = 248
          Top = 20
          Width = 75
          Height = 25
          Caption = '&None'
          Enabled = False
          TabOrder = 2
          OnClick = BNoneClick
        end
      end
    end
    object TabOptions: TTabSheet
      Caption = 'Options'
    end
  end
  object Timer1: TTimer
    Enabled = False
    Interval = 1
    OnTimer = Timer1Timer
    Left = 52
    Top = 144
  end
  object Timer2: TTimer
    Enabled = False
    Interval = 1
    OnTimer = Timer2Timer
    Left = 108
    Top = 144
  end
end
