program numbers_format
implicit none
integer :: i = 1234,     &
           j = 12345678, &
           n = -12345678


print '(a,i4,a)', 'i=', i, '<'  ! i=1234<
print '(a,i6,a)', 'i=', i, '<'  ! i=  1234<   Padding with blanks
print '(a,i8,a)', 'i=', i, '<'  ! i=    1234<
print '(a,i8,a)', 'j=', j, '<'  ! j=12345678<

print '(a,i4,a)', 'j=', j, '<'  ! j=****<     Number has 8 digits

                                !             Format holds only 4
print '(a,i2,a)', 'i=', i, '<'  ! i=**<       4 digits, 2 spaces

print '(a,i8,a)', 'n=', n, '<'  ! n=********< Account for sign
print '(a,i19,a)', 'n=', n, '<'  ! n=-12345678<

end program numbers_format
