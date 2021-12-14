object IBTransactionEditForm: TIBTransactionEditForm
  Left = 247
  Top = 213
  ActiveControl = OKBtn
  BorderStyle = bsDialog
  BorderWidth = 5
  Caption = 'Transaction Editor'
  ClientHeight = 197
  ClientWidth = 291
  Color = clBtnFace
  ParentFont = True
  HelpFile = 'ibx.hlp'
  OldCreateOrder = False
  Position = poScreenCenter
  OnCreate = FormCreate
  PixelsPerInch = 96
  TextHeight = 13
  object GroupBox1: TGroupBox
    Left = 0
    Top = 0
    Width = 291
    Height = 163
    Align = alClient
    Caption = 'Transaction Properties'
    TabOrder = 0
    object Label1: TLabel
      Left = 163
      Top = 13
      Width = 43
      Height = 13
      HelpType = htKeyword
      Caption = 'Se&ttings:'
      FocusControl = TransactionParams
    end
    object rbSnapShot: TRadioButton
      Left = 7
      Top = 26
      Width = 150
      Height = 14
      Caption = '&Snapshot'
      TabOrder = 0
      OnClick = rbSnapShotClick
    end
    object rbReadCommitted: TRadioButton
      Left = 7
      Top = 46
      Width = 150
      Height = 14
      Caption = 'Read &Committed'
      TabOrder = 1
      OnClick = rbReadCommittedClick
    end
    object rbReadOnlyTableStability: TRadioButton
      Left = 7
      Top = 69
      Width = 150
      Height = 14
      Caption = '&Read-Only Table Stability'
      TabOrder = 2
      OnClick = rbReadOnlyTableStabilityClick
    end
    object rbReadWriteTableStability: TRadioButton
      Left = 7
      Top = 91
      Width = 150
      Height = 14
      Caption = 'Read-&Write Table Stability '
      TabOrder = 3
      OnClick = rbReadWriteTableStabilityClick
    end
    object TransactionParams: TMemo
      Left = 163
      Top = 26
      Width = 126
      Height = 103
      Lines.Strings = (
        '')
      ScrollBars = ssBoth
      TabOrder = 7
      WordWrap = False
      OnClick = TransactionParamsClick
      OnExit = TransactionParamsExit
    end
    object rbPreCommitted: TRadioButton
      Left = 8
      Top = 112
      Width = 149
      Height = 17
      Caption = 'Precommitted'
      TabOrder = 4
      OnClick = rbPreCommittedClick
    end
    object chkReadOnly: TCheckBox
      Left = 29
      Top = 140
      Width = 97
      Height = 17
      Caption = 'Read Only'
      TabOrder = 5
      OnClick = chkReadOnlyClick
    end
    object chkNoSavePoints: TCheckBox
      Left = 165
      Top = 140
      Width = 97
      Height = 17
      Hint = 'Requires IB 7.51 or higher'
      Caption = 'No Savepoints'
      ParentShowHint = False
      ShowHint = True
      TabOrder = 6
      OnClick = chkNoSavePointsClick
    end
  end
  object Panel1: TPanel
    Left = 0
    Top = 163
    Width = 291
    Height = 34
    Align = alBottom
    BevelOuter = bvNone
    BorderWidth = 5
    TabOrder = 1
    object HelpBtn: TButton
      Left = 208
      Top = 8
      Width = 75
      Height = 25
      Caption = '&Help'
      TabOrder = 0
      OnClick = HelpBtnClick
    end
    object Cancelbtn: TButton
      Left = 124
      Top = 8
      Width = 74
      Height = 25
      Cancel = True
      Caption = 'Cancel'
      ModalResult = 2
      TabOrder = 2
    end
    object OKBtn: TButton
      Left = 39
      Top = 8
      Width = 75
      Height = 25
      Caption = 'OK'
      Default = True
      TabOrder = 1
      OnClick = OKBtnClick
    end
  end
end
