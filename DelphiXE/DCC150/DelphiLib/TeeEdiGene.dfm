object FormTeeGeneral: TFormTeeGeneral
  Left = 180
  Top = 163
  AutoScroll = False
  BorderIcons = [biSystemMenu]
  ClientHeight = 301
  ClientWidth = 416
  Color = clBtnFace
  ParentFont = True
  OldCreateOrder = True
  OnCreate = FormCreate
  OnDestroy = FormDestroy
  OnDeactivate = FormDeactivate
  OnShow = FormShow
  PixelsPerInch = 96
  TextHeight = 13
  object PageControl1: TPageControl
    Left = 0
    Top = 0
    Width = 416
    Height = 301
    ActivePage = TabSheet1
    Align = alClient
    HotTrack = True
    TabOrder = 0
    OnChange = PageControl1Change
    object TabSheet1: TTabSheet
      Caption = 'Zoom'
      object LSteps: TLabel
        Left = 120
        Top = 26
        Width = 30
        Height = 13
        Alignment = taRightJustify
        Caption = '&Steps:'
        FocusControl = SEAniZoomSteps
      end
      object Label1: TLabel
        Left = 16
        Top = 86
        Width = 112
        Height = 18
        Alignment = taRightJustify
        AutoSize = False
        Caption = '&Minimum pixels:'
        FocusControl = EMinPix
      end
      object Label2: TLabel
        Left = 16
        Top = 115
        Width = 45
        Height = 13
        Alignment = taRightJustify
        Caption = '&Direction:'
        FocusControl = CBDir
      end
      object Label3: TLabel
        Left = 24
        Top = 140
        Width = 69
        Height = 13
        Alignment = taRightJustify
        Caption = 'M&ouse Button:'
        FocusControl = CBZoomMouse
      end
      object CBAllowZoom: TCheckBox
        Left = 8
        Top = 3
        Width = 123
        Height = 18
        HelpContext = 44
        Caption = '&Allow'
        TabOrder = 0
        OnClick = CBAllowZoomClick
      end
      object CBAnimatedZoom: TCheckBox
        Left = 8
        Top = 25
        Width = 91
        Height = 17
        HelpContext = 48
        Caption = 'An&imated'
        TabOrder = 1
        OnClick = CBAnimatedZoomClick
      end
      object SEAniZoomSteps: TEdit
        Left = 152
        Top = 23
        Width = 27
        Height = 21
        HelpContext = 49
        TabOrder = 2
        Text = '8'
        OnChange = SEAniZoomStepsChange
      end
      object UDAniZoomSteps: TUpDown
        Left = 179
        Top = 23
        Width = 15
        Height = 21
        Associate = SEAniZoomSteps
        Position = 8
        TabOrder = 3
      end
      object BZoomPen: TButtonPen
        Left = 16
        Top = 50
        HelpContext = 1454
        Caption = 'P&en...'
        TabOrder = 4
      end
      object BZoomColor: TButton
        Left = 104
        Top = 50
        Width = 75
        Height = 25
        HelpContext = 1449
        Caption = 'P&attern...'
        TabOrder = 5
        OnClick = BZoomColorClick
      end
      object EMinPix: TEdit
        Left = 131
        Top = 83
        Width = 32
        Height = 21
        HelpContext = 1452
        TabOrder = 6
        Text = '16'
        OnChange = EMinPixChange
      end
      object UDMinPix: TUpDown
        Left = 163
        Top = 83
        Width = 15
        Height = 21
        Associate = EMinPix
        Position = 16
        TabOrder = 7
      end
      object CBDir: TComboFlat
        Left = 64
        Top = 111
        Width = 117
        HelpContext = 1450
        TabOrder = 8
        OnChange = CBDirChange
        Items.Strings = (
          'Horizontal'
          'Vertical'
          'Both')
      end
      object CBZoomMouse: TComboFlat
        Left = 95
        Top = 136
        Width = 86
        HelpContext = 1453
        TabOrder = 9
        OnChange = CBZoomMouseChange
        Items.Strings = (
          'Left'
          'Right'
          'Middle')
      end
      object CBUpLeft: TCheckBox
        Left = 3
        Top = 165
        Width = 197
        Height = 17
        Caption = 'Zoom on &Up Left drag'
        TabOrder = 10
        OnClick = CBUpLeftClick
      end
      object CBHistory: TCheckBox
        Left = 88
        Top = 3
        Width = 105
        Height = 18
        HelpContext = 44
        Caption = '&Historical unzoom'
        TabOrder = 11
        OnClick = CBHistoryClick
      end
    end
    object TabSheet2: TTabSheet
      Caption = 'Scroll'
      object Label4: TLabel
        Left = 25
        Top = 144
        Width = 69
        Height = 13
        Alignment = taRightJustify
        Caption = '&Mouse Button:'
        FocusControl = CBScrollMouse
      end
      object RGPanning: TRadioGroup
        Left = 24
        Top = 12
        Width = 161
        Height = 117
        HelpContext = 358
        Caption = 'Allow Scroll:'
        Items.Strings = (
          '&None'
          '&Horizontal'
          '&Vertical'
          '&Both')
        TabOrder = 0
        OnClick = RGPanningClick
      end
      object CBScrollMouse: TComboFlat
        Left = 99
        Top = 140
        Width = 87
        HelpContext = 1455
        TabOrder = 1
        OnChange = CBScrollMouseChange
        Items.Strings = (
          'Left'
          'Right'
          'Middle')
      end
    end
    object TabCursor: TTabSheet
      Caption = 'Cursor'
      ImageIndex = 2
    end
    object TabFont: TTabSheet
      Caption = 'Fonts'
      ImageIndex = 3
      object Splitter1: TSplitter
        Left = 133
        Top = 33
        Height = 240
      end
      object LBFonts: TListBox
        Left = 4
        Top = 33
        Width = 129
        Height = 240
        Align = alLeft
        Ctl3D = False
        ItemHeight = 13
        MultiSelect = True
        ParentCtl3D = False
        Sorted = True
        TabOrder = 0
        OnClick = LBFontsClick
        OnKeyDown = LBFontsKeyDown
      end
      object Panel1: TPanel
        Left = 0
        Top = 33
        Width = 4
        Height = 240
        Align = alLeft
        BevelOuter = bvNone
        TabOrder = 1
      end
      object PanelFont: TPanel
        Left = 136
        Top = 33
        Width = 272
        Height = 240
        Align = alClient
        BevelOuter = bvNone
        TabOrder = 2
      end
      object Panel2: TPanel
        Left = 0
        Top = 0
        Width = 408
        Height = 33
        Align = alTop
        TabOrder = 3
        object CBAllFonts: TCheckBox
          Left = 8
          Top = 8
          Width = 97
          Height = 17
          Caption = '&All Fonts'
          TabOrder = 0
          OnClick = CBAllFontsClick
        end
      end
    end
  end
end
