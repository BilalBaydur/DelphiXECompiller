object IBUpdateSQLEditForm: TIBUpdateSQLEditForm
  Left = 319
  Top = 87
  ActiveControl = UpdateTableName
  BorderStyle = bsDialog
  ClientHeight = 296
  ClientWidth = 494
  Color = clBtnFace
  ParentFont = True
  HelpFile = 'ibx.hlp'
  OldCreateOrder = True
  Position = poScreenCenter
  OnCloseQuery = FormCloseQuery
  OnCreate = FormCreate
  OnDestroy = FormDestroy
  DesignSize = (
    494
    296)
  PixelsPerInch = 96
  TextHeight = 13
  object OkButton: TButton
    Left = 236
    Top = 268
    Width = 75
    Height = 25
    Anchors = [akRight, akBottom]
    Caption = '&OK'
    Default = True
    ModalResult = 1
    TabOrder = 0
    OnClick = OkButtonClick
    ExplicitLeft = 215
  end
  object CancelButton: TButton
    Left = 324
    Top = 268
    Width = 75
    Height = 25
    Anchors = [akRight, akBottom]
    Cancel = True
    Caption = 'Cancel'
    ModalResult = 2
    TabOrder = 1
    ExplicitLeft = 303
  end
  object HelpButton: TButton
    Left = 412
    Top = 268
    Width = 75
    Height = 25
    Anchors = [akRight, akBottom]
    Caption = '&Help'
    TabOrder = 2
    OnClick = HelpButtonClick
    ExplicitLeft = 391
  end
  object PageControl: TPageControl
    Left = 6
    Top = 6
    Width = 480
    Height = 253
    ActivePage = FieldsPage
    Anchors = [akLeft, akTop, akRight, akBottom]
    TabOrder = 3
    OnChanging = PageControlChanging
    ExplicitWidth = 459
    object FieldsPage: TTabSheet
      Caption = 'Options'
      ExplicitWidth = 451
      DesignSize = (
        472
        225)
      object GroupBox1: TGroupBox
        Left = 8
        Top = 4
        Width = 456
        Height = 212
        Anchors = [akLeft, akTop, akRight, akBottom]
        Caption = ' SQL Generation '
        TabOrder = 0
        ExplicitWidth = 435
        DesignSize = (
          456
          212)
        object Label1: TLabel
          Left = 12
          Top = 18
          Width = 60
          Height = 13
          Caption = 'Table &Name:'
          FocusControl = UpdateTableName
        end
        object Label3: TLabel
          Left = 167
          Top = 18
          Width = 52
          Height = 13
          Caption = '&Key Fields:'
          FocusControl = KeyFieldList
        end
        object Label4: TLabel
          Left = 310
          Top = 18
          Width = 69
          Height = 13
          Caption = 'Update &Fields:'
          FocusControl = UpdateFieldList
        end
        object UpdateTableName: TComboBox
          Left = 9
          Top = 35
          Width = 151
          Height = 21
          TabOrder = 0
          OnChange = UpdateTableNameChange
          OnClick = UpdateTableNameClick
        end
        object KeyFieldList: TListBox
          Left = 167
          Top = 35
          Width = 136
          Height = 163
          Anchors = [akLeft, akTop, akBottom]
          ItemHeight = 13
          MultiSelect = True
          PopupMenu = FieldListPopup
          Sorted = True
          TabOrder = 6
          OnClick = SettingsChanged
        end
        object UpdateFieldList: TListBox
          Left = 310
          Top = 35
          Width = 136
          Height = 163
          Anchors = [akLeft, akTop, akBottom]
          ItemHeight = 13
          MultiSelect = True
          PopupMenu = FieldListPopup
          Sorted = True
          TabOrder = 7
          OnClick = SettingsChanged
        end
        object GenerateButton: TButton
          Left = 17
          Top = 154
          Width = 143
          Height = 25
          Caption = '&Generate SQL'
          TabOrder = 4
          OnClick = GenerateButtonClick
        end
        object PrimaryKeyButton: TButton
          Left = 17
          Top = 124
          Width = 143
          Height = 25
          Caption = 'Select &Primary Keys'
          TabOrder = 3
          OnClick = PrimaryKeyButtonClick
        end
        object DefaultButton: TButton
          Left = 17
          Top = 93
          Width = 143
          Height = 25
          Caption = '&Dataset Defaults'
          Enabled = False
          TabOrder = 2
          OnClick = DefaultButtonClick
        end
        object QuoteFields: TCheckBox
          Left = 18
          Top = 184
          Width = 143
          Height = 17
          Caption = '&Quote Identifiers'
          TabOrder = 5
          OnClick = SettingsChanged
        end
        object GetTableFieldsButton: TButton
          Left = 17
          Top = 62
          Width = 143
          Height = 25
          Caption = 'Get &Table Fields'
          TabOrder = 1
          OnClick = GetTableFieldsButtonClick
        end
      end
    end
    object SQLPage: TTabSheet
      Caption = 'SQL'
      DesignSize = (
        472
        225)
      object Label2: TLabel
        Left = 13
        Top = 53
        Width = 48
        Height = 13
        Caption = 'S&QL Text:'
        FocusControl = SQLMemo
      end
      object SQLMemo: TMemo
        Left = 9
        Top = 69
        Width = 454
        Height = 141
        Anchors = [akLeft, akTop, akRight, akBottom]
        ScrollBars = ssBoth
        TabOrder = 0
        WordWrap = False
        OnKeyPress = SQLMemoKeyPress
      end
      object StatementType: TRadioGroup
        Left = 10
        Top = 6
        Width = 432
        Height = 40
        Caption = 'Statement Type'
        Columns = 4
        ItemIndex = 0
        Items.Strings = (
          '&Modify'
          '&Insert'
          '&Delete'
          '&Refresh')
        TabOrder = 1
        OnClick = StatementTypeClick
      end
    end
  end
  object FieldListPopup: TPopupMenu
    Left = 46
    Top = 242
    object miSelectAll: TMenuItem
      Caption = '&Select All'
      OnClick = SelectAllClick
    end
    object miClearAll: TMenuItem
      Caption = '&Clear All'
      OnClick = ClearAllClick
    end
  end
  object FTempTable: TIBTable
    Left = 19
    Top = 242
  end
end
