program implicitLoop
implicit none

integer :: i, j, k
real, dimension(4)    :: x, y, z
real, dimension(10,5) :: w

call random_number(x)

print *, "X:"
print '(4f13.10,x)', (x(i), i=1, 4)

y = [1., 2., 3. , 4.]
z(1:4) = [ (sqrt(y(i)), i=1, 4) ]
print *, "Z, Y:"
print '(4(f16.10,x), 4(f3.1,x))', (z(i), i=1, 4), (y(i), i=1, 4)

call random_number(w)
print *, "W:"
print '(50(f16.10,x))', ((w(i,j), i=1, 10), j=1, 5)

end program

