keybuf = 255
selled = 0
$d = 0
while true


	if blt_get_chg_flag == 1
		keybuf = (keybuf << 1)
		blt_clear_chg_flag
	else
		keybuf = (keybuf << 1) | sw2_read
	end

	if (keybuf & 0x03) == 0x02
		selled = selled + 1
		led1_write(selled)
		$d = $d + 1
	end
				
	sleep_ms 200

end
