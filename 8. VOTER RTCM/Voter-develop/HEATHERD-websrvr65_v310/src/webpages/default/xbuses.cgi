<html>
<head>
<meta http-equiv="Pragma" content="no-cache">
<link href="mx.css" rel="stylesheet" type="text/css">
<script src="lib01.js"></script>
<script src="buscfg65.js"></script>
</head>

<body class=ifrmBody>
<p><b style="color:red">Linking of Serial Buses is in Beta stage, and has not been fully tested yet! Please
report any bugs on our <a href="http://forum.modtronix.com/index.php?board=1.0" target=_blank>forum</a></b>.
<p>
This section is used to link the available serial buses. This board has
4 serial buses:
<br>- Serial Port 1
<br>- Serial Port 2
<br>- UDP Port 1
<br>- UDP Port 2
<br>
It is possible to link <i>Serial Port 1 or 2</i> with <i>UDP Port 1 or 2</i>. For example, when
linking <i>Serial Port 1</i> to <i>UDP Port 1</i>, than all data received via one bus will be sent
to the other bus, and visa-versa.
<br>
To configure the serial buses, choose from the <i>settings</i> menu's on the left.
</p>
<script type="text/javascript">
	if (%l03 == 0)
		sectags();
	else {
		bufcfg(%u00,%u01,%u02,%u03,%u04,%u05,%u16,%u17);
	}
</script>
</body>
</html>