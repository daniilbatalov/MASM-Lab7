			model		small, c
			.code

			public		paritycheck
paritycheck	proc		i:word, v:word, a:word			;i - index, v - value, a - count
			uses		si

			mov			ax, i
			test		ax, 1
			jnz			false_exit

			mov			ax, v
			cmp			ax, 0
			jle			false_exit

			mov			si, a
			mov			dx, word ptr [si]
			inc			dx
			mov			word ptr [si], dx				;count++

			mov			ax, 1
			jmp			true_exit

false_exit:	xor			ax, ax		
	
true_exit:	ret


paritycheck	endp
			end