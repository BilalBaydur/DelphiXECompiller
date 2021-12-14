object AreaSeriesEditor: TAreaSeriesEditor
  Left = 222
  Top = 118
  AutoScroll = False
  BorderIcons = [biSystemMenu]
  ClientHeight = 236
  ClientWidth = 318
  Color = clBtnFace
  ParentFont = True
  OldCreateOrder = True
  OnCreate = FormCreate
  OnDestroy = FormDestroy
  OnShow = FormShow
  PixelsPerInch = 96
  TextHeight = 13
  object PageControl1: TPageControl
    Left = 0
    Top = 0
    Width = 318
    Height = 236
    ActivePage = TabSheet1
    Align = alClient
    TabOrder = 0
    object TabSheet1: TTabSheet
      Caption = 'Options'
      object GroupBox2: TGroupBox
        Left = 4
        Top = 1
        Width = 297
        Height = 89
        Caption = 'Area:'
        TabOrder = 0
        object CBStairs: TCheckBox
          Left = 9
          Top = 20
          Width = 90
          Height = 17
          HelpContext = 438
          Caption = '&Stairs'
          TabOrder = 0
          OnClick = CBStairsClick
        end
        object BAreaLinesPen: TButtonPen
          Left = 196
          Top = 55
          Width = 89
          HelpContext = 53
          Caption = 'Area &Lines...'
          TabOrder = 1
        end
        object BAreaLinePen: TButtonPen
          Left = 196
          Top = 19
          Width = 89
          HelpContext = 275
          Caption = '&Border...'
          TabOrder = 2
        end
        object CBInvStairs: TCheckBox
          Left = 9
          Top = 44
          Width = 88
          Height = 17
          HelpContext = 438
          Caption = 'Inverted'
          TabOrder = 3
          OnClick = CBInvStairsClick
        end
        object BPattern: TButton
          Left = 104
          Top = 19
          Width = 83
          Height = 25
          HelpContext = 1909
          Caption = '&Pattern...'
          TabOrder = 4
          OnClick = BPatternClick
        end
        object Button1: TButton
          Left = 104
          Top = 55
          Width = 83
          Height = 25
          HelpContext = 117
          Caption = '&Top...'
          TabOrder = 5
          OnClick = Button1Click
        end
        object CBSmoothed: TCheckBox
          Left = 9
          Top = 67
          Width = 83
          Height = 17
          Caption = 'S&moothed'
          TabOrder = 6
          OnClick = CBSmoothedClick
        end
      end
      object GroupBox5: TGroupBox
        Left = 4
        Top = 96
        Width = 145
        Height = 52
        Caption = 'Tra&nsparency:'
        TabOrder = 1
        object ETransp: TEdit
          Left = 16
          Top = 20
          Width = 33
          Height = 21
          HelpContext = 856
          TabOrder = 0
          Text = '0'
          OnChange = ETranspChange
        end
        object UDTransp: TUpDown
          Left = 49
          Top = 20
          Width = 15
          Height = 21
          HelpContext = 856
          Associate = ETransp
          TabOrder = 1
        end
        object CBDark3D: TCheckBox
          Left = 75
          Top = 22
          Width = 65
          Height = 17
          Caption = '&Dark 3D'
          TabOrder = 2
          OnClick = CBDark3DClick
        end
      end
      object GroupBox1: TGroupBox
        Left = 160
        Top = 96
        Width = 141
        Height = 101
        Caption = 'Color:'
        TabOrder = 2
        object CBColorEach: TCheckBox
          Left = 9
          Top = 16
          Width = 80
          Height = 17
          HelpContext = 164
          Caption = 'Color &Each'
          TabOrder = 0
          OnClick = CBColorEachClick
        end
        object BAreaColor: TButtonColor
          Left = 9
          Top = 40
          HelpContext = 421
          Caption = '&Color...'
          TabOrder = 1
        end
      end
      object GroupBox4: TGroupBox
        Left = 4
        Top = 153
        Width = 146
        Height = 45
        Caption = 'Treat n&ulls:'
        TabOrder = 3
        object CBNulls: TComboFlat
          Left = 8
          Top = 16
          Width = 132
          ItemIndex = 0
          TabOrder = 0
          Text = 'Dont Paint'
          OnChange = CBNullsChange
          Items.Strings = (
            'Dont Paint'
            'Skip'
            'Ignore')
        end
      end
    end
    object TabSheet2: TTabSheet
      Caption = 'Stack'
      ImageIndex = 1
      object RGMultiArea: TRadioGroup
        Left = 4
        Top = 3
        Width = 149
        Height = 73
        HelpContext = 299
        Caption = '&Multiple Areas:'
        Items.Strings = (
          'None'
          'Stacked'
          'Stacked 100%')
        TabOrder = 0
        OnClick = RGMultiAreaClick
      end
      object GroupBox3: TGroupBox
        Left = 4
        Top = 81
        Width = 149
        Height = 59
        TabOrder = 1
        object Label1: TLabel
          Left = 34
          Top = 34
          Width = 30
          Height = 13
          Alignment = taRightJustify
          Caption = '&Origin:'
          FocusControl = EOrigin
        end
        object CBUseOrigin: TCheckBox
          Left = 8
          Top = 10
          Width = 121
          Height = 17
          HelpContext = 1358
          Caption = '&Use Origin'
          TabOrder = 0
          OnClick = CBUseOriginClick
        end
        object EOrigin: TEdit
          Left = 67
          Top = 31
          Width = 57
          Height = 21
          HelpContext = 1359
          TabOrder = 1
          Text = '0'
          OnChange = EOriginChange
        end
        object UDOrigin: TUpDown
          Left = 124
          Top = 31
          Width = 15
          Height = 21
          HelpContext = 1359
          Associate = EOrigin
          Min = -30000
          Max = 30000
          TabOrder = 2
        end
      end
      object GroupBox6: TGroupBox
        Left = 160
        Top = 3
        Width = 137
        Height = 73
        Caption = 'Stack &Group:'
        TabOrder = 2
        object EGroup: TEdit
          Left = 16
          Top = 24
          Width = 45
          Height = 21
          TabOrder = 0
          Text = '0'
          OnChange = EGroupChange
        end
        object UDGroup: TUpDown
          Left = 61
          Top = 24
          Width = 15
          Height = 21
          Associate = EGroup
          TabOrder = 1
        end
      end
    end
  end
end
