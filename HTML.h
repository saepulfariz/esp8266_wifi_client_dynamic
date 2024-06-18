const char index_html[] PROGMEM = R"rawliteral(
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Saepulfariz - Atur SSID dan Password</title>

    <style>
        input[type=text], [type=password]{
            width: 100%;
            padding: 12px 20px;
            margin: 8px 0;
            display: inline-block;
            border: 1px solid #ccc;
            border-radius: 4px;
            box-sizing: border-box;
        }
        input[type=submit]{
            width: 100%;
            background-color: #4CAF50;
            color: white;
            padding: 14px 20px;
            margin: 8px 0;
            border: none;
            border-radius: 4px;
            cursor: pointer;
        }
        
        input[type=submit]:hover{
            background-color: #45A049;
        }
        
        div{
            border-radius: 5px;
            background-color: #f2f2f2;
            padding: 20px
        }
        </style>
</head>
<body>
    <h3 style="text-align: center;">Pengaturan Alat | Saepulfariz</h3>
    <div style="width: 230px; margin: auto;">
        <form action="/action_page">
            <label for="ssid">SSID</label>
            <input type="text" id="ssid" name="ssidNew" placeholder="SSID WiFi Anda">
            
            <label for="password">Password</label>
            <input type="password" id="password" name="passNew" placeholder="Kosongkan jika tidak menggunakan password">
            
            <input type="submit" value="Simpan">
        </form>
    </div>
</body>
</html>
)rawliteral";


const char sukses_html[] PROGMEM = R"rawliteral(
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Berhasil | Saepulfariz</title>
    <style>
      div{
        position: fixed;
        top: 50%;
        left: 50%;
        margin-top: -100px;
        margin-left: -300px;
      }
    </style>
  </head>
  
  <body>
    <div>
      <h1>Pengaturan Berhasil Disimpan!</h1>
    </div>
  </body>
</html>

)rawliteral";
