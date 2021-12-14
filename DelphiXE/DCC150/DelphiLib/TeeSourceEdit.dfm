object BaseSourceEditor: TBaseSourceEditor
  Left = 302
  Top = 316
  Width = 385
  Height = 224
  VertScrollBar.Range = 32
  AutoScroll = False
  BorderIcons = [biSystemMenu]
  Color = clBtnFace
  ParentFont = True
  OldCreateOrder = True
  OnCloseQuery = FormCloseQuery
  OnCreate = FormCreate
  OnShow = FormShow
  PixelsPerInch = 96
  TextHeight = 13
  object Pan: TPanel
    Left = 0
    Top = 0
    Width = 369
    Height = 32
    Align = alTop
    TabOrder = 0
    object LLabel: TLabel
      Left = 8
      Top = 7
      Width = 79
      Height = 15
      Alignment = taRightJustify
      AutoSize = False
      Caption = '&Source:'
      FocusControl = CBSources
      Layout = tlCenter
    end
    object CBSources: TComboFlat
      Left = 93
      Top = 5
      Width = 177
      HelpContext = 178
      TabOrder = 0
      OnChange = CBSourcesChange
    end
    object PanelApply: TPanel
      Left = 280
      Top = 1
      Width = 88
      Height = 30
      Align = alRight
      BevelOuter = bvNone
      TabOrder = 1
      object BApply: TButton
        Left = 6
        Top = 3
        Width = 75
        Height = 25
        Caption = '&Apply'
        Enabled = False
        TabOrder = 0
      end
    end
  end
end
