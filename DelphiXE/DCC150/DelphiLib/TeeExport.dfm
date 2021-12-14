object TeeExportFormBase: TTeeExportFormBase
  Left = 155
  Top = 150
  Width = 514
  Height = 393
  ActiveControl = PageControl1
  BorderIcons = [biSystemMenu]
  Caption = 'Export Dialog'
  Color = clBtnFace
  ParentFont = True
  OldCreateOrder = True
  Position = poScreenCenter
  OnClose = FormClose
  OnCreate = FormCreate
  OnDestroy = FormDestroy
  OnShow = FormShow
  PixelsPerInch = 96
  TextHeight = 13
  object PageControl1: TPageControl
    Left = 0
    Top = 0
    Width = 498
    Height = 319
    ActivePage = TabPicture
    Align = alClient
    HotTrack = True
    TabOrder = 0
    OnChange = PageControl1Change
    object TabPicture: TTabSheet
      Caption = 'Picture'
      object SplitPic: TSplitter
        Left = 218
        Top = 0
        Height = 277
        Align = alRight
      end
      object RGFormat: TGroupBox
        Left = 0
        Top = 0
        Width = 218
        Height = 277
        HelpContext = 1476
        Align = alClient
        Caption = '&Format'
        Ctl3D = True
        ParentCtl3D = False
        TabOrder = 0
        object LBFormat: TListBox
          Left = 2
          Top = 15
          Width = 214
          Height = 260
          Align = alClient
          Ctl3D = False
          ItemHeight = 13
          ParentCtl3D = False
          Sorted = True
          TabOrder = 0
          OnClick = RGFormatClick
        end
      end
      object PageOptions: TPageControl
        Left = 221
        Top = 0
        Width = 269
        Height = 277
        HelpContext = 1476
        ActivePage = TabOptions
        Align = alRight
        HotTrack = True
        TabOrder = 1
        OnChange = PageOptionsChange
        object TabOptions: TTabSheet
          Caption = 'Options'
        end
        object TabSize: TTabSheet
          Caption = 'Size'
          object Label1: TLabel
            Left = 27
            Top = 13
            Width = 31
            Height = 13
            Alignment = taRightJustify
            Caption = '&Width:'
            FocusControl = EWidth
          end
          object Label2: TLabel
            Left = 24
            Top = 45
            Width = 34
            Height = 13
            Alignment = taRightJustify
            Caption = '&Height:'
            FocusControl = EHeight
          end
          object LabelPicSize: TLabel
            Left = 148
            Top = 123
            Width = 6
            Height = 13
            Caption = '?'
          end
          object EWidth: TEdit
            Left = 62
            Top = 10
            Width = 49
            Height = 21
            TabOrder = 0
            Text = '0'
            OnChange = EWidthChange
          end
          object UDWidth: TUpDown
            Left = 111
            Top = 10
            Width = 15
            Height = 21
            Associate = EWidth
            Max = 3000
            TabOrder = 1
          end
          object EHeight: TEdit
            Left = 62
            Top = 42
            Width = 49
            Height = 21
            TabOrder = 2
            Text = '0'
            OnChange = EWidthChange
          end
          object UDHeight: TUpDown
            Left = 111
            Top = 42
            Width = 15
            Height = 21
            Associate = EHeight
            Max = 3000
            TabOrder = 3
          end
          object CBAspect: TCheckBox
            Left = 19
            Top = 85
            Width = 151
            Height = 17
            Caption = '&Keep aspect ratio'
            Checked = True
            State = cbChecked
            TabOrder = 4
          end
          object CBPicSize: TCheckBox
            Left = 18
            Top = 121
            Width = 117
            Height = 17
            Caption = '&File size:'
            TabOrder = 5
            OnClick = CBPicSizeClick
          end
        end
      end
      object Panel2: TPanel
        Left = 0
        Top = 277
        Width = 490
        Height = 14
        Align = alBottom
        BevelOuter = bvNone
        TabOrder = 2
      end
    end
    object TabNative: TTabSheet
      HelpContext = 1477
      Caption = 'Native'
      object LabelSize: TLabel
        Left = 196
        Top = 76
        Width = 6
        Height = 13
        Caption = '?'
      end
      object CBNativeData: TCheckBox
        Left = 16
        Top = 8
        Width = 157
        Height = 17
        HelpContext = 1477
        Caption = '&Include Series data'
        Checked = True
        State = cbChecked
        TabOrder = 0
        OnClick = CBNativeDataClick
      end
      object CBFileSize: TCheckBox
        Left = 195
        Top = 50
        Width = 124
        Height = 17
        HelpContext = 1477
        Caption = '&File size:'
        TabOrder = 1
        OnClick = CBFileSizeClick
      end
      object CBNativeFormat: TRadioGroup
        Left = 15
        Top = 40
        Width = 169
        Height = 81
        Caption = 'Format:'
        ItemIndex = 0
        Items.Strings = (
          '&Binary'
          '&Text'
          '&XML')
        TabOrder = 2
        OnClick = CBNativeFormatClick
      end
      object BViewNative: TButton
        Left = 16
        Top = 140
        Width = 75
        Height = 25
        Caption = '&View...'
        Enabled = False
        TabOrder = 3
        OnClick = BViewNativeClick
      end
    end
    object TabData: TTabSheet
      HelpContext = 1478
      Caption = 'Data'
      object Panel4: TPanel
        Left = 0
        Top = 0
        Width = 490
        Height = 193
        Align = alTop
        BevelOuter = bvNone
        TabOrder = 0
        object Splitter1: TSplitter
          Left = 224
          Top = 0
          Height = 193
        end
        object Panel5: TPanel
          Left = 0
          Top = 0
          Width = 224
          Height = 193
          Align = alLeft
          BevelOuter = bvNone
          TabOrder = 0
          OnResize = Panel5Resize
          object Label3: TLabel
            Left = 7
            Top = 4
            Width = 32
            Height = 13
            Caption = 'Se&ries:'
            FocusControl = CBSeries
          end
          object CBSeries: TComboFlat
            Left = 6
            Top = 21
            Width = 211
            TabOrder = 0
            OnChange = CBSeriesChange
            DropDownWidth = 250
          end
          object RGText: TRadioGroup
            Left = 6
            Top = 49
            Width = 211
            Height = 112
            HelpContext = 1481
            Caption = '&Format:'
            ItemIndex = 0
            Items.Strings = (
              'Text'
              'XML'
              'HTML Table'
              'Excel')
            TabOrder = 1
            OnClick = RGTextClick
          end
          object CBDataPreview: TCheckBox
            Left = 10
            Top = 171
            Width = 97
            Height = 17
            Caption = '&Preview'
            TabOrder = 2
            OnClick = CBDataPreviewClick
          end
        end
        object Panel3: TPanel
          Left = 227
          Top = 0
          Width = 263
          Height = 193
          Align = alClient
          BevelOuter = bvNone
          TabOrder = 1
          object PageDataOptions: TPageControl
            Left = 0
            Top = 0
            Width = 263
            Height = 193
            ActivePage = TabInclude
            Align = alClient
            TabOrder = 0
            object TabInclude: TTabSheet
              Caption = 'Include'
              object CBIndex: TCheckBox
                Left = 8
                Top = 15
                Width = 113
                Height = 17
                HelpContext = 1485
                Caption = 'Point &Index'
                TabOrder = 0
                OnClick = CBIndexClick
              end
              object CBLabels: TCheckBox
                Left = 8
                Top = 36
                Width = 108
                Height = 17
                HelpContext = 1486
                Caption = 'Point &Labels'
                Checked = True
                State = cbChecked
                TabOrder = 1
                OnClick = CBIndexClick
              end
              object CBHeader: TCheckBox
                Left = 8
                Top = 57
                Width = 108
                Height = 17
                HelpContext = 1484
                Caption = '&Header'
                Checked = True
                State = cbChecked
                TabOrder = 2
                OnClick = CBIndexClick
              end
              object CBColors: TCheckBox
                Left = 8
                Top = 79
                Width = 108
                Height = 17
                HelpContext = 1484
                Caption = 'Point &Colors'
                TabOrder = 3
                OnClick = CBIndexClick
              end
            end
            object TabDataOptions: TTabSheet
              Caption = 'Options'
              ImageIndex = 1
              object Label4: TLabel
                Left = 8
                Top = 7
                Width = 43
                Height = 13
                Caption = '&Delimiter:'
                FocusControl = CBDelim
              end
              object Label6: TLabel
                Left = 30
                Top = 50
                Width = 61
                Height = 13
                Alignment = taRightJustify
                Caption = 'Text &Quotes:'
                FocusControl = EQuotes
              end
              object LabelEncoding: TLabel
                Left = 6
                Top = 74
                Width = 48
                Height = 13
                Caption = '&Encoding:'
                FocusControl = CBEncoding
                Visible = False
              end
              object LabelXML: TLabel
                Left = 6
                Top = 121
                Width = 73
                Height = 13
                Caption = '&XML Encoding:'
                FocusControl = CBXMLEncoding
              end
              object CBDelim: TComboFlat
                Left = 6
                Top = 22
                Width = 85
                HelpContext = 1487
                TabOrder = 0
                OnChange = CBDelimChange
                Items.Strings = (
                  'Space'
                  'Tab'
                  'Comma'
                  'Colon'
                  'Custom')
              end
              object ECustom: TEdit
                Left = 96
                Top = 22
                Width = 41
                Height = 21
                HelpContext = 1487
                Enabled = False
                MaxLength = 1
                TabOrder = 1
                OnChange = ECustomChange
              end
              object EQuotes: TEdit
                Left = 96
                Top = 46
                Width = 41
                Height = 21
                HelpContext = 1487
                MaxLength = 1
                TabOrder = 2
                OnChange = EQuotesChange
              end
              object CBEncoding: TComboFlat
                Left = 6
                Top = 91
                Width = 129
                ItemIndex = 2
                TabOrder = 3
                Text = 'Default'
                Visible = False
                Items.Strings = (
                  'Ascii'
                  'Big Endian Unicode'
                  'Default'
                  'Unicode'
                  'UTF-7'
                  'UTF-8')
              end
              object CBXMLEncoding: TComboFlat
                Left = 6
                Top = 138
                Width = 129
                Style = csDropDown
                Enabled = False
                TabOrder = 4
                Text = 'ISO-8859-1'
                OnChange = CBXMLEncodingChange
                Items.Strings = (
                  'windows-1252'
                  'ISO-8859-1'
                  'UTF-8'
                  'UTF-16')
              end
            end
          end
        end
      end
      object PanelPreview: TPanel
        Left = 0
        Top = 193
        Width = 490
        Height = 98
        Align = alClient
        BevelOuter = bvNone
        TabOrder = 1
        object MemoData: TMemo
          Left = 0
          Top = 0
          Width = 490
          Height = 97
          Align = alClient
          BorderStyle = bsNone
          ReadOnly = True
          ScrollBars = ssBoth
          TabOrder = 0
          Visible = False
          WordWrap = False
        end
      end
    end
  end
  object Panel1: TPanel
    Left = 0
    Top = 319
    Width = 498
    Height = 38
    Align = alBottom
    BevelOuter = bvNone
    TabOrder = 1
    object BCopy: TButton
      Left = 8
      Top = 7
      Width = 75
      Height = 25
      Caption = '&Copy'
      TabOrder = 0
      OnClick = BCopyClick
    end
    object BSave: TButton
      Left = 96
      Top = 7
      Width = 75
      Height = 25
      Caption = '&Save...'
      TabOrder = 1
      OnClick = BSaveClick
    end
    object BSend: TButton
      Left = 184
      Top = 7
      Width = 75
      Height = 25
      Caption = 'S&end...'
      TabOrder = 2
      OnClick = BSendClick
    end
    object PanelClose: TPanel
      Left = 392
      Top = 0
      Width = 106
      Height = 38
      Align = alRight
      BevelOuter = bvNone
      TabOrder = 3
      object BClose: TButton
        Left = 7
        Top = 7
        Width = 75
        Height = 25
        Cancel = True
        Caption = 'Close'
        Default = True
        ModalResult = 1
        TabOrder = 0
      end
    end
    object BPreview: TButton
      Left = 272
      Top = 7
      Width = 75
      Height = 25
      Caption = '&Preview...'
      Enabled = False
      TabOrder = 4
      OnClick = BPreviewClick
    end
  end
  object SaveDialogPicture: TSaveDialog
    FilterIndex = 0
    Left = 288
    Top = 164
  end
  object SaveDialogData: TSaveDialog
    DefaultExt = 'txt'
    Filter = 
      'Space delimited text files|*.txt|Tab delimited text files|*.txt|' +
      'Comma delimited text files|*.csv|Colon delimited text files|*.tx' +
      't|Custom delimited text files|*.txt|XML files|*.xml|HTML files|*' +
      '.htm|Microsoft Excel files|*.xls'
    Left = 208
    Top = 164
  end
  object SaveDialogNative: TSaveDialog
    Filter = 'Native tee files|*.TEE'
    Left = 80
    Top = 284
  end
end
