object Form4: TForm4
  Left = 0
  Top = 0
  ActiveControl = Button1
  BorderIcons = []
  Caption = 'Login'
  ClientHeight = 211
  ClientWidth = 250
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  Position = poDesktopCenter
  PixelsPerInch = 96
  TextHeight = 13
  object Panel1: TPanel
    Left = 0
    Top = 0
    Width = 250
    Height = 211
    Align = alClient
    TabOrder = 0
    ExplicitLeft = 24
    ExplicitWidth = 252
    ExplicitHeight = 242
    object Label1: TLabel
      Left = 0
      Top = 17
      Width = 250
      Height = 49
      Alignment = taCenter
      AutoSize = False
      Caption = 'DIVANI'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clBtnText
      Font.Height = 40
      Font.Name = 'Tahoma'
      Font.Style = []
      ParentFont = False
    end
    object Label2: TLabel
      Left = 16
      Top = 115
      Width = 74
      Height = 13
      Alignment = taCenter
      AutoSize = False
      Caption = 'Password :'
    end
    object Label3: TLabel
      Left = 48
      Top = 72
      Width = 185
      Height = 13
      Alignment = taCenter
      AutoSize = False
    end
    object Button1: TButton
      Left = 88
      Top = 147
      Width = 145
      Height = 54
      Caption = 'Login'
      TabOrder = 0
      OnClick = Button1Click
    end
    object Button2: TButton
      Left = 16
      Top = 147
      Width = 66
      Height = 54
      Caption = 'Cancel'
      TabOrder = 1
      OnClick = Button2Click
    end
    object Edit1: TEdit
      Left = 96
      Top = 112
      Width = 129
      Height = 21
      PasswordChar = '*'
      TabOrder = 2
    end
  end
end
