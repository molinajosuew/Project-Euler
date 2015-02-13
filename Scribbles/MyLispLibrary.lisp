;;; This function checks whether x is prime.
(define (is_prime? x)
  (if (= 2 (count (divisors x)))
    #t
    #f))

;;; This function computes all prime numbers up to x.
(define (primes x)
  (if (= x 2)
    (list x)
    (if (is_prime? x)
      (append (primes (- x 1)) (list x))
      (primes (- x 1)))))

;;; This function counts the number of elements in x.
(define (count x)
  (if (null? x)
    0
    (+ 1 (count (cdr x)))))

;;; This function is a helper of divisors.
(define (divisors_h x y)
  (if (= y 1)
    (list y)
    (if (= (mod x y) 0)
      (append (list y) (divisors_h x (- y 1)))
      (divisors_h x (- y 1)))))

;;; This function computes the divisors of x.      
(define (divisors x)
  (divisors_h x x))