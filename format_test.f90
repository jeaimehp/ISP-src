program test
implicit none
real             :: pi = 3.14159, &
                    p2 = 314.159, &
                    pm = -314.159

print '(a,f7.5,a)', 'pi=',pi,'<' ! pi=3.14159<   1 digit before dot
print '(a,f6.4,a)', 'pi=',pi,'<' ! pi=3.1416<    Rounded
print '(a,f7.3,a)', 'p2=',p2,'<' ! p2=314.159<   3 digits before dot
print '(a,f7.5,a)', 'p2=',p2,'<' ! p2=*******<
print '(a,f15.9,a)', 'p2=',p2,'<' ! p2=314.15900< 3 digits before dot
print '(a,f7.3,a)', 'pm=',pm,'<' ! pm=*******<   3 digits before dot
print '(a,f8.3,a)', 'pm=',pm,'<' ! pm=-314.159<  4 digits before dot
end program
