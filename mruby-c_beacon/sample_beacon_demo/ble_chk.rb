while true

	if $d == 10
		puts "LED Change count 10\0"		# \nは自動付加されるがNULLは付加されないのでputs使用時はNULLを指定する
											# putsコマンドのmruby/cの実装は c_puts_nl→c_puts→console_printf→console_putchar→hal_write
											# console_printfでNULLによる終端判定を行う
		$d = 0
	end

	ble_process_event()
	sleep_ms 50

end
