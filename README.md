# Atividade2-LabAEDS
<div class="carousel">
  <input type="radio" id="minmax1" name="carousel" checked>
  <input type="radio" id="minmax2" name="carousel">
  <input type="radio" id="minmax3" name="carousel">

  <div class="slides">
    <div class="image" id="first">
      <img src="minmax1.png" alt="Image 1">
    </div>
    <div class="image" id="second">
      <img src="minmax2.png" alt="Image 2">
    </div>
    <div class="image" id="third">
      <img src="minmax3.png" alt="Image 3">
    </div>
  </div>

  <div class="navigation">
    <label for="minmax1"></label>
    <label for="minmax2"></label>
    <label for="minmax3"></label>
  </div>
</div>

<style>
  .carousel {
    position: relative;
    width: 100%;
    max-width: 600px;
    margin: 0 auto;
    overflow: hidden;
  }

  .slides {
    display: flex;
  }

  .image {
    flex: 0 0 100%;
  }

  .navigation {
    position: absolute;
    bottom: 10px;
    left: 50%;
    transform: translateX(-50%);
  }

  .navigation label {
    cursor: pointer;
    display: inline-block;
    width: 15px;
    height: 15px;
    background: #ddd;
    border-radius: 50%;
    margin: 0 5px;
  }

  .navigation label:hover {
    background: #aaa;
  }

  input[type="radio"] {
    display: none;
  }

  input[type="radio"]:checked + .slides .image {
    opacity: 0;
  }

  input[type="radio"]:checked + .slides #first,
  #minmax1:checked ~ .navigation label:nth-child(1),
  #minmax2:checked ~ .navigation label:nth-child(2),
  #minmax3:checked ~ .navigation label:nth-child(3) {
    opacity: 1;
  }
</style>
