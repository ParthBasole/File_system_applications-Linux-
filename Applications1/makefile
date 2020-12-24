start:
	@echo	"welcome chose on the commands to proceed which are ....1) build_all  2) run_checkf {ARGS}{MODE}  3)run_ls {ARGS} 4) run_maxsize {ARGS} 5)run_rempty {ARGS} 6)run_link {ARGS}{MODE} 7)run_cpy {ARGS}{MODE} 8)clean_all"
build_all:
	gcc	Checkf.c	-o	chkf
	gcc	Copy.c	-o	cpyf
	gcc	link.c	-o	cpydir
	gcc	ls.c	-o	ls
	gcc	max_size.c	-o	max_size
	gcc	rm_empty.c	-o	remp
	@echo	"compiled!"
	
run_checkf:
	./chkf	${ARGS}	${MODE}
	@echo	"executed"
run_ls:
	./ls	${ARGS}${MODE}
	@echo	"executed"
run_maxsize:
	./max_size	${ARGS}	
	@echo	"executed"
run_rempty:
	./remp	${ARGS}	
	@echo	"executed"
run_link:
	./cpydir	${ARGS}${MODE}
	@echo	"executed"
run_cpy:
	./cpyf	${ARGS}${MODE}
clean_all:
	rm	cpyf
	rm	cpydir
	rm	max_size
	rm	remp
	rm	ls
	rm	chkf
	clear
	@echo	"removed"
 
