			model		small, c
			.code

			public		addvalue
addvalue	proc		c:word, v:word				;c - count, v - value
			uses		si

			mov			ax, v
			mov			si, c

			add			word ptr [si], ax
			ret
addvalue	endp
			end
