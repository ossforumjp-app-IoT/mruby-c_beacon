while true

	if $d == 10
		puts "LED Change count 10\0"		# \n�͎����t������邪NULL�͕t������Ȃ��̂�puts�g�p����NULL���w�肷��
											# puts�R�}���h��mruby/c�̎����� c_puts_nl��c_puts��console_printf��console_putchar��hal_write
											# console_printf��NULL�ɂ��I�[������s��
		$d = 0
	end

	ble_process_event()
	sleep_ms 50

end
