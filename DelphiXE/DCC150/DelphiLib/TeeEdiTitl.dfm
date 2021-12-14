object FormTeeTitle: TFormTeeTitle
  Left = 387
  Top = 216
  Width = 425
  Height = 309
  ActiveControl = CBTitles
  BorderIcons = []
  Color = clBtnFace
  ParentFont = True
  OldCreateOrder = True
  Position = poScreenCenter
  OnCreate = FormCreate
  OnShow = FormShow
  PixelsPerInch = 96
  TextHeight = 13
  object PageControlTitle: TPageControl
    Left = 0
    Top = 36
    Width = 409
    Height = 237
    ActivePage = TabSheet1
    Align = alClient
    HotTrack = True
    TabOrder = 0
    OnChange = PageControlTitleChange
    object TabSheet1: TTabSheet
      Caption = 'Style'
      object MText: TMemo
        Left = 0
        Top = 49
        Width = 401
        Height = 127
        HelpContext = 640
        Align = alClient
        ScrollBars = ssBoth
        TabOrder = 0
        WantTabs = True
        WordWrap = False
        OnChange = MTextChange
      end
      object Panel2: TPanel
        Left = 0
        Top = 0
        Width = 401
        Height = 49
        Align = alTop
        BevelOuter = bvNone
        TabOrder = 1
        object Label1: TLabel
          Left = 6
          Top = 32
          Width = 24
          Height = 13
          Caption = '&Text:'
          FocusControl = MText
        end
        object Label2: TLabel
          Left = 233
          Top = 8
          Width = 49
          Height = 13
          Alignment = taRightJustify
          Caption = 'Alig&nment:'
        end
        object CBVisible: TCheckBox
          Left = 6
          Top = 6
          Width = 65
          Height = 17
          HelpContext = 681
          Caption = '&Visible'
          TabOrder = 0
          OnClick = CBVisibleClick
        end
        object CBAdjust: TCheckBox
          Left = 77
          Top = 6
          Width = 136
          Height = 17
          HelpContext = 37
          Caption = '&Adjust Frame'
          TabOrder = 1
          OnClick = CBAdjustClick
        end
        object CBAlign: TComboFlat
          Left = 289
          Top = 4
          Width = 82
          TabOrder = 2
          OnChange = CBAlignChange
          Items.Strings = (
            'Left'
            'Center'
            'Right')
        end
      end
      object Panel3: TPanel
        Left = 0
        Top = 176
        Width = 401
        Height = 33
        Align = alBottom
        BevelOuter = bvNone
        TabOrder = 2
        object Button1: TButton
          Left = 8
          Top = 5
          Width = 75
          Height = 25
          Caption = '&Edit...'
          TabOrder = 0
          OnClick = Button1Click
        end
      end
    end
    object TabSheet2: TTabSheet
      Caption = 'Position'
      object Label3: TLabel
        Left = 8
        Top = 104
        Width = 60
        Height = 13
        Caption = '&Vert. Margin:'
        FocusControl = Edit1
      end
      object GroupBox1: TGroupBox
        Left = 3
        Top = 2
        Width = 145
        Height = 94
        TabOrder = 0
        object Label4: TLabel
          Left = 51
          Top = 38
          Width = 21
          Height = 13
          Alignment = taRightJustify
          Caption = 'L&eft:'
          FocusControl = ECustLeft
        end
        object Label5: TLabel
          Left = 51
          Top = 67
          Width = 22
          Height = 13
          Alignment = taRightJustify
          Caption = 'T&op:'
          FocusControl = ECustTop
        end
        object ECustLeft: TEdit
          Left = 77
          Top = 34
          Width = 41
          Height = 21
          HelpContext = 1461
          Enabled = False
          TabOrder = 0
          Text = '0'
          OnChange = ECustLeftChange
        end
        object UDLeft: TUpDown
          Left = 118
          Top = 34
          Width = 15
          Height = 21
          HelpContext = 1461
          Associate = ECustLeft
          Enabled = False
          Min = -1000
          Max = 1000
          Increment = 5
          TabOrder = 1
        end
        object ECustTop: TEdit
          Left = 77
          Top = 63
          Width = 41
          Height = 21
          HelpContext = 1462
          Enabled = False
          TabOrder = 2
          Text = '0'
          OnChange = ECustTopChange
        end
        object UDTop: TUpDown
          Left = 118
          Top = 63
          Width = 15
          Height = 21
          HelpContext = 1462
          Associate = ECustTop
          Enabled = False
          Min = -1000
          Max = 1000
          Increment = 5
          TabOrder = 3
        end
        object CBCustPos: TCheckBox
          Left = 8
          Top = 13
          Width = 129
          Height = 17
          HelpContext = 1442
          Caption = '&Custom:'
          TabOrder = 4
          OnClick = CBCustPosClick
        end
      end
      object Edit1: TEdit
        Left = 8
        Top = 120
        Width = 41
        Height = 21
        TabOrder = 1
        Text = '0'
        OnChange = Edit1Change
      end
      object UDMargin: TUpDown
        Left = 49
        Top = 120
        Width = 15
        Height = 21
        Associate = Edit1
        Min = -500
        Max = 500
        TabOrder = 2
      end
    end
  end
  object Panel1: TPanel
    Left = 0
    Top = 0
    Width = 409
    Height = 36
    Align = alTop
    TabOrder = 1
    object CBTitles: TComboFlat
      Left = 9
      Top = 6
      Width = 85
      HelpContext = 649
      TabOrder = 0
      OnChange = CBTitlesChange
      Items.Strings = (
        'Title'
        'SubTitle'
        'SubFoot'
        'Foot')
    end
  end
end
