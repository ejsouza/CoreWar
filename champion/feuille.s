.name "feu"
.comment "feuuuuille"

st r1, 11
ld 6, r1
vie:
live %9
zjmp %:vie
ld -8, r2
ld -9, r3
st r2, 200
st r3, 199
st r5, -39
lfork %1000
and r5,r6,r7
zjmp %177
